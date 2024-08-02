#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEXEME_LENGTH 200 // maximum size of individual lexemes

// Elementary single-character lexemes
#define LPAREN_TOK '('
#define RPAREN_TOK ')'
#define LCURLY_TOK '{'
#define RCURLY_TOK '}'
#define LBRACKET_TOK '['
#define RBRACKET_TOK ']'
#define GT_TOK '>'
#define EQUAL_TOK '='
#define LT_TOK '<'
#define NOT_TOK '!'
#define PLUS_TOK '+'
#define MINUS_TOK '-'
#define MUL_TOK '*'
#define DIV_TOK '/'
#define AND_TOK '&'
#define OR_TOK '|'
#define XOR_TOK '^'
#define COLON_TOK ':'
#define SEMI_COLON_TOK ';'
#define COMMA_TOK ','
#define BITWISE_NOT_TOK '~'
#define PERIOD_TOK '.'
#define QUESTION_MARK_TOK '?'
#define SINGLE_INVERTED_COMMA '\''
#define ESCAPE_NOTATION_TOK '\\'
#define MODULO_TOK '%'

// Identifier, operator and literal tokens
#define ID_TOK 256
#define GTE_TOK 257
#define LTE_TOK 258
#define PLUS_EQUAL_TOK 259
#define MINUS_EQUAL_TOK 260
#define MUL_EQUAL_TOK 261
#define DIV_EQUAL_TOK 262
#define XOR_EQUAL_TOK 263
#define BIT_AND_EQUAL_TOK 264
#define BIT_OR_EQUAL_TOK 265
#define LOG_AND_TOK 266
#define LOG_OR_TOK 267
#define EQUAL_EQUAL_TOK 268
#define LEFT_SHIFT_TOK 269
#define RIGHT_SHIFT_TOK 270
#define NOT_EQUAL_TOK 271
#define PLUS_PLUS_TOK 272
#define MINUS_MINUS_TOK 273
#define MOD_EQUAL_TOK 274

#define STRING_LITERAL 275
#define INTEGER_LITERAL 276
#define FLOAT_LITERAL 277
#define EXP_LITERAL 278

// Keyword OFFSET --> keywords starting from this token_id
#define KEYWORD_OFFSET 279

// Source code file pointer
FILE *yyin;

// Lexical output file pointer
FILE *yyout;

int state = 0; // initially the state of the DFA is 0

char *yytext;      // lexeme
int yytextPointer; // points to the current index in the lexeme character array

int yylineNo = 1; // line number of the lexeme in the source code file

char keywords[32][9] = {"auto", "const", "double", "float", "int", "short", "struct", "unsigned",
                        "break", "continue", "else", "for", "long", "signed", "switch", "void",
                        "case", "default", "enum", "goto", "register", "sizeof", "typedef",
                        "volatile", "char", "do", "extern", "if", "return", "static", "union",
                        "while"};

/*
    @brief:- Function returns the index-offset of the lexeme in the keyword array if present,
             else returns -1

    @param:-  Nil
    @return:- index offset if present(>=0), else -1

*/
int keywordScan()
{
    for (int i = 0; i < 32; i++)
    {
        // printf("%s\n", yytext);
        if (strcmp(yytext, keywords[i]) == 0)
        {
            return i;
        }
    }
    return -1;
}

/*
    @brief:- Function ignores the single line comment and pre-processor directives
    @param:- Nil
    @return:- Nil

*/
void ignore_comment_or_macro()
{
    // go back to state 0 and ignore this line
    state = 0;

    do
    {
        fscanf(yyin, "%c", &yytext[yytextPointer]);
    } while (yytext[yytextPointer] != '\n');
    yylineNo++;

    // clear the buffer
    memset(yytext, '\0', MAX_LEXEME_LENGTH);
    yytextPointer = -1; // at end of the while() loop in caller we increment the yytextPointer value so it should start from 0
}

/*
    @brief:- Function ignores multi-line comment
    @param:- Nil
    @return:- Nil

*/
void ignore_multiline_comment()
{
    state = 0;

    do
    {
        fscanf(yyin, "%c", &yytext[yytextPointer]);
        if (yytext[yytextPointer] == '\n')
            yylineNo++;
    } while (yytext[yytextPointer] != '*');

    fscanf(yyin, "%c", &yytext[yytextPointer]); // scan the / character

    // clear the buffer
    memset(yytext, '\0', MAX_LEXEME_LENGTH);
    yytextPointer = -1; // at end of the while() loop in caller we increment the yytextPointer value so it should start from 0
}

/*
    @brief:- predicts single-character token from longest-prefix-matched state,
             by going to the first state (previous) state

    @param:- Nil
    @return:- token_id of the single-character multiple matched token

*/
int go_back()
{

    // Go back 2 places to get the previous state
    // Remove current character from yytext

    fseek(yyin, -1, SEEK_CUR);

    yytext[yytextPointer] = '\0';
    yytextPointer--;

    int prevState = state;
    // process from state 0
    state = 0;

    if (prevState == 1)
        return PLUS_TOK;
    else if (prevState == 4)
        return MINUS_TOK;
    else if (prevState == 7)
        return MUL_TOK;
    else if (prevState == 9)
        return DIV_TOK;
    else if (prevState == 12)
        return MODULO_TOK;
    else if (prevState == 14)
        return EQUAL_TOK;
    else if (prevState == 16)
        return GT_TOK;
    else if (prevState == 19)
        return LT_TOK;
    else if (prevState == 22)
        return OR_TOK;
    else if (prevState == 25)
        return AND_TOK;
    else if (prevState == 28)
        return XOR_TOK;
    else if (prevState == 31)
        return NOT_TOK;
    else if (prevState == 33)
        return INTEGER_LITERAL;
    else if (prevState == 37)
        return FLOAT_LITERAL;
    else if (prevState == 40)
        return EXP_LITERAL;
    else if (prevState == 43)
    {
        int keyword_offset = keywordScan();
        if (keyword_offset != -1)
        {
            return KEYWORD_OFFSET + keyword_offset;
        }
        else
        {
            return ID_TOK;
        }
    }

    /*
        TODO
    */

    fprintf(yyout, "Error on Line number %d\n", yylineNo);
    return -1;
}

/*
    @brief:- Function returns token_id for a given lexeme in the source code file
    @param:- NIL
    @return:- token_id of the current lexeme

*/
int yylex()
{
    while (!feof(yyin))
    {
        char ch;
        do
        {
            if (fscanf(yyin, "%c", &ch) != 1)
            {
                // Reached the end of the FILE, finish lexical analysis
                fprintf(yyout, "LEXICAL ANALYSIS COMPLETED .....\n");
                return -1;
            }
            yytext[yytextPointer] = ch;
            if (yytext[yytextPointer] == '\n')
                yylineNo++;
        } while (yytext[yytextPointer] == '\t' || yytext[yytextPointer] == '\n');

        if (strcmp(yytext, "\0") == 0 || feof(yyin))
        {
            fprintf(yyout, "LEXICAL ANALYSIS COMPLETED .....\n");
            return -1;
        }

        if (state == 0)
        {
            if (yytext[yytextPointer] == '+')
            {
                state = 1;
            }
            else if (yytext[yytextPointer] == '-')
            {
                state = 4;
            }
            else if (yytext[yytextPointer] == '*')
            {
                state = 7;
            }
            else if (yytext[yytextPointer] == '/')
            {
                state = 9;
            }
            else if (yytext[yytextPointer] == '%')
            {
                state = 12;
            }
            else if (yytext[yytextPointer] == '=')
            {
                state = 14;
            }
            else if (yytext[yytextPointer] == '>')
            {
                state = 16;
            }
            else if (yytext[yytextPointer] == '<')
            {
                state = 19;
            }
            else if (yytext[yytextPointer] == '|')
            {
                state = 22;
            }
            else if (yytext[yytextPointer] == '&')
            {
                state = 25;
            }
            else if (yytext[yytextPointer] == '^')
            {
                state = 28;
            }
            else if (yytext[yytextPointer] == '!')
            {
                state = 31;
            }
            else if (isdigit(yytext[yytextPointer]))
            {
                state = 33;
            }
            else if (yytext[yytextPointer] == '"')
            {
                state = 41;
            }
            else if (yytext[yytextPointer] == '_' || yytext[yytextPointer] == '$' || isalpha(yytext[yytextPointer]))
            {
                state = 43;
            }
            else if (yytext[yytextPointer] == '~')
            {
                return BITWISE_NOT_TOK;
            }

            else if (yytext[yytextPointer] == ';')
            {
                return SEMI_COLON_TOK;
            }
            else if (yytext[yytextPointer] == '{')
            {
                return LCURLY_TOK;
            }
            else if (yytext[yytextPointer] == '}')
            {
                return RCURLY_TOK;
            }
            else if (yytext[yytextPointer] == '(')
            {
                return LPAREN_TOK;
            }
            else if (yytext[yytextPointer] == ')')
            {
                return RPAREN_TOK;
            }
            else if (yytext[yytextPointer] == '[')
            {
                return LBRACKET_TOK;
            }
            else if (yytext[yytextPointer] == ']')
            {
                return RBRACKET_TOK;
            }
            else if (yytext[yytextPointer] == '.')
            {
                return PERIOD_TOK;
            }
            else if (yytext[yytextPointer] == '\\')
            {
                return ESCAPE_NOTATION_TOK;
            }
            else if (yytext[yytextPointer] == '\'')
            {
                return SINGLE_INVERTED_COMMA;
            }
            else if (yytext[yytextPointer] == '?')
            {
                return QUESTION_MARK_TOK;
            }
            else if (yytext[yytextPointer] == ':')
            {
                return COLON_TOK;
            }
            else if (yytext[yytextPointer] == ',')
            {
                return COMMA_TOK;
            }
            else if (yytext[yytextPointer] == '#')
            {
                ignore_comment_or_macro();
            }
            else if (yytext[yytextPointer] == ' ')
                ;
            else
            {
                fprintf(yyout, "Found lexical error on line number %d\n", yylineNo);
                return -1;
            }
        }
        else if (state == 1)
        {
            // already +
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return PLUS_EQUAL_TOK;
            }
            else if (yytext[yytextPointer] == '+')
            {
                state = 0;
                return PLUS_PLUS_TOK;
            }
            else if (isdigit(yytext[yytextPointer]))
            {
                state = 33;
            }
            else
                return go_back();
        }
        else if (state == 4)
        {
            // -
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return MINUS_EQUAL_TOK;
            }
            else if (yytext[yytextPointer] == '-')
            {
                state = 0;
                return MINUS_MINUS_TOK;
            }
            else if (isdigit(yytext[yytextPointer]))
            {
                state = 33;
            }
            else
                return go_back();
        }
        else if (state == 7)
        {
            // *
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return MUL_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 9)
        {
            // '/'
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return DIV_EQUAL_TOK;
            }
            else if (yytext[yytextPointer] == '/')
            {
                ignore_comment_or_macro();
            }
            else if (yytext[yytextPointer] == '*')
            {
                ignore_multiline_comment();
            }
            else
                return go_back();
        }
        else if (state == 12)
        {
            // %
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return MOD_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 14)
        {
            // =
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return EQUAL_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 16)
        { // >
            if (yytext[yytextPointer] == '>')
            {
                state = 0;
                return RIGHT_SHIFT_TOK;
            }
            else if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return GTE_TOK;
            }
            else
                return go_back();
        }
        else if (state == 19)
        {
            // <
            if (yytext[yytextPointer] == '<')
            {
                state = 0;
                return LEFT_SHIFT_TOK;
            }
            else if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return LTE_TOK;
            }
            else
                return go_back();
        }
        else if (state == 22)
        {
            // |
            if (yytext[yytextPointer] == '|')
            {
                state = 0;
                return LOG_OR_TOK;
            }
            else if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return BIT_OR_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 25)
        { // &
            if (yytext[yytextPointer] == '&')
            {
                state = 0;
                return LOG_AND_TOK;
            }
            else if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return BIT_AND_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 28)
        {
            // ^
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return XOR_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 31)
        {
            // !
            if (yytext[yytextPointer] == '=')
            {
                state = 0;
                return NOT_EQUAL_TOK;
            }
            else
                return go_back();
        }
        else if (state == 33)
        {
            // +digit or -digit or digit
            if (isdigit(yytext[yytextPointer]))
            {
                state = 33;
            }
            else if (yytext[yytextPointer] == '.')
            {
                state = 36;
            }
            else if (yytext[yytextPointer] == 'e')
            {
                state = 38;
            }
            else
                return go_back();
        }
        else if (state == 36)
        {
            // +digit. or -digit. or digit.
            if (isdigit(yytext[yytextPointer]))
            {
                state = 37;
            }
            else
            {
                fprintf(yyout, "Error on line number: %d\n", yylineNo);
                return -1;
            }
        }
        else if (state == 37)
        {
            // +digit.digit or -digit.digit or digit.digit
            if (isdigit(yytext[yytextPointer]))
            {
                state = 37;
            }
            else if (yytext[yytextPointer] == 'e')
            {
                state = 38;
            }
            else
                return go_back();
        }
        else if (state == 38)
        {
            if (isdigit(yytext[yytextPointer]))
            {
                state = 40;
            }
            else if (yytext[yytextPointer] == '+' || yytext[yytextPointer] == '-')
            {
                state = 39;
            }
            else
            {
                fprintf(yyout, "Error on line number: %d\n", yylineNo);
                return -1;
            }
        }
        else if (state == 39)
        {
            if (isdigit(yytext[yytextPointer]))
            {
                state = 40;
            }
            else
            {
                fprintf(yyout, "Error on line number: %d\n", yylineNo);
                return -1;
            }
        }
        else if (state == 40)
        {
            if (isdigit(yytext[yytextPointer]))
            {
                state = 40;
            }
            else
                return go_back();
        }
        else if (state == 41)
        {
            if (yytext[yytextPointer] != '"')
            {
                state = 41;
            }
            else
            {
                state = 0;
                return STRING_LITERAL;
            }
        }
        else if (state == 43)
        {
            if (isalnum(yytext[yytextPointer]) || yytext[yytextPointer] == '_' || yytext[yytextPointer] == '$')
            {
                state = 43;
            }
            else
            {
                return go_back();
            }
        }
        else
        {
            printf("Error on Line number: %d\n", yylineNo);
            return -1;
        }

        if (yytext[yytextPointer] != ' ')
        {
            yytextPointer++;
        }
    }

    printf("Error on Line number: %d\n", yylineNo);
    return -1;
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <input_source _code_file> <output_file_containing_tokens>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // open the input and output files
    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    if (yyin == NULL || yyout == NULL)
    {
        perror("fopen() error\n");
    }

    // initialise space for the lexeme buffer
    yytext = (char *)malloc(sizeof(char) * MAX_LEXEME_LENGTH);

    int token; // token_id of the lexeme
    fprintf(yyout, "%-20s %-20s\n", "LEXEME_NAME", "TOKEN_ID");
    while (!feof(yyin))
    {
        token = yylex();
        if (token == -1)
            break;
        fprintf(yyout, "%-20s %d\n", yytext, token);
        // clear the buffer and reset the pointer
        memset(yytext, '\0', MAX_LEXEME_LENGTH);
        yytextPointer = 0;
    }

    // clear up
    fclose(yyin);
    fclose(yyout);
    free(yytext);

    return 0;
}
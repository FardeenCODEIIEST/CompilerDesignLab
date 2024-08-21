#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "lexer.h"

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
    int star_cnt = 0;
    do
    {
        fscanf(yyin, "%c", &yytext[yytextPointer]);
        if (yytext[yytextPointer] == '*')
        {
            star_cnt++;
        }
        else if (yytext[yytextPointer] != '/')
        {
            star_cnt = 0;
        }
        if (yytext[yytextPointer] == '\n')
            yylineNo++;
    } while (!(yytext[yytextPointer] == '/' && star_cnt >= 1));

    // fscanf(yyin, "%c", &yytext[yytextPointer]); // scan the / character

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
                // fprintf(yyout, "LEXICAL ANALYSIS COMPLETED .....\n");
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
            else if (yytext[yytextPointer] == '_' || isalpha(yytext[yytextPointer]))
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
            else if (yytext[yytextPointer] == '$')
            {
                return DOLLAR_TOK;
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
            else if (isalpha(yytext[yytextPointer]) || yytext[yytextPointer] == '_')
            {
                fprintf(yyout, "Error on line number: %d\n", yylineNo);
                return -1;
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
            if (isalnum(yytext[yytextPointer]) || yytext[yytextPointer] == '_')
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

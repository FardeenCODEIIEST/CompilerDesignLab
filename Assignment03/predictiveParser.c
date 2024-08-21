#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lexer.h"
#include "stack.h"

// Non-terminals
#define E_NON_TERMINAL 400
#define E_PRIME_NON_TERMINAL 401
#define T_NON_TERMINAL 402
#define F_NON_TERMINAL 403
#define T_PRIME_NON_TERMINAL 404

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s <source_file_name> <output_file_name>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    yyin = fopen(argv[1], "r");
    yyout = fopen(argv[2], "w");

    if (yyin == NULL || yyout == NULL)
    {
        fprintf(stderr, "fopen() error\n");
        exit(EXIT_FAILURE);
    }

    yytext = (char *)malloc(MAX_LEXEME_LENGTH * sizeof(char));
    int token;

    st = (stack *)malloc(sizeof(stack));
    st->len = 0;

    // push Dollar and Start Symbol

    push(DOLLAR_TOK);
    push(E_NON_TERMINAL);

    token = yylex();

    while (1)
    {
        if (token == -1)
            break;

        int stack_top = top();
        if (stack_top == E_NON_TERMINAL)
        {
            if (token == ID_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: E ---> TE'\n", yytext);
                pop();
                push(E_PRIME_NON_TERMINAL);
                push(T_NON_TERMINAL);
            }
            else if (token == LPAREN_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: E ---> TE'\n", yytext);
                pop();
                push(E_PRIME_NON_TERMINAL);
                push(T_NON_TERMINAL);
            }
            else
            {
                fprintf(yyout, "Expression is NOT syntactically correct\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (stack_top == E_PRIME_NON_TERMINAL)
        {
            if (token == PLUS_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: E' ---> +TE'\n", yytext);
                pop();
                push(E_PRIME_NON_TERMINAL);
                push(T_NON_TERMINAL);
                push(PLUS_TOK);
            }
            else if (token == RPAREN_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: E' ---> epsilon\n", yytext);
                pop();
            }
            else if (token == DOLLAR_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: E' ---> epsilon\n", yytext);
                pop();
            }
            else
            {
                fprintf(yyout, "Expression is NOT syntactically correct\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (stack_top == T_NON_TERMINAL)
        {
            if (token == ID_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T ---> FT'\n", yytext);
                pop();
                push(T_PRIME_NON_TERMINAL);
                push(F_NON_TERMINAL);
            }
            else if (token == LPAREN_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T ---> FT'\n", yytext);
                pop();
                push(T_PRIME_NON_TERMINAL);
                push(F_NON_TERMINAL);
            }
            else
            {
                fprintf(yyout, "Expression is NOT syntactically correct\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (stack_top == T_PRIME_NON_TERMINAL)
        {
            if (token == PLUS_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T' ---> epsilon\n", yytext);
                pop();
            }
            else if (token == MUL_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T' ---> *FT'\n", yytext);
                pop();
                push(T_PRIME_NON_TERMINAL);
                push(F_NON_TERMINAL);
                push(MUL_TOK);
            }
            else if (token == RPAREN_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T' ---> epsilon\n", yytext);
                pop();
            }
            else if (token == DOLLAR_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: T' ---> epsilon\n", yytext);
                pop();
            }
            else
            {
                fprintf(yyout, "Expression is NOT syntactically correct\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (stack_top == F_NON_TERMINAL)
        {
            if (token == ID_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: F ---> id\n", yytext);
                pop();
                push(ID_TOK);
            }
            else if (token == LPAREN_TOK)
            {
                fprintf(yyout, "For lexeme %s, Substitution: F ---> (id)\n", yytext);
                pop();
                push(RPAREN_TOK);
                push(E_NON_TERMINAL);
                push(LPAREN_TOK);
            }
            else
            {
                fprintf(yyout, "Expression is NOT syntactically correct\n");
                exit(EXIT_FAILURE);
            }
        }
        else if (stack_top == token && token != DOLLAR_TOK)
        {
            fprintf(yyout, "Matched %s\n", yytext);
            pop();
            memset(yytext, '\0', MAX_LEXEME_LENGTH);
            yytextPointer = 0;
            token = yylex();
        }
        else if (stack_top == token && token == DOLLAR_TOK)
        {
            fprintf(yyout, "Given Expression is syntactically correct!!\nParsing Completed.....\n");
            pop();
            memset(yytext, '\0', MAX_LEXEME_LENGTH);
            yytextPointer = 0;
            token = yylex();
        }
    }

    if (!empty())
    {
        fprintf(yyout, "Expression is NOT syntactically correct\n");
    }

    fclose(yyin);
    fclose(yyout);
    free(yytext);
    free(st);

    return 0;
}
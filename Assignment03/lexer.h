#ifndef C_LEXER
#define C_LEXER
#include <stdio.h>

int yylex();

extern char *yytext;
extern FILE *yyin;
extern FILE *yyout;
extern int yytextPointer;

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
#define DOLLAR_TOK '$'
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

#endif
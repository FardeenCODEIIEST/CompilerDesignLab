/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    LPAREN_TOK = 258,              /* LPAREN_TOK  */
    RPAREN_TOK = 259,              /* RPAREN_TOK  */
    LCURLY_TOK = 260,              /* LCURLY_TOK  */
    RCURLY_TOK = 261,              /* RCURLY_TOK  */
    LBRACKET_TOK = 262,            /* LBRACKET_TOK  */
    RBRACKET_TOK = 263,            /* RBRACKET_TOK  */
    GT_TOK = 264,                  /* GT_TOK  */
    EQUAL_TOK = 265,               /* EQUAL_TOK  */
    LT_TOK = 266,                  /* LT_TOK  */
    NOT_TOK = 267,                 /* NOT_TOK  */
    PLUS_TOK = 268,                /* PLUS_TOK  */
    MINUS_TOK = 269,               /* MINUS_TOK  */
    MUL_TOK = 270,                 /* MUL_TOK  */
    DIV_TOK = 271,                 /* DIV_TOK  */
    AND_TOK = 272,                 /* AND_TOK  */
    OR_TOK = 273,                  /* OR_TOK  */
    XOR_TOK = 274,                 /* XOR_TOK  */
    COLON_TOK = 275,               /* COLON_TOK  */
    SEMI_COLON_TOK = 276,          /* SEMI_COLON_TOK  */
    COMMA_TOK = 277,               /* COMMA_TOK  */
    BITWISE_NOT_TOK = 278,         /* BITWISE_NOT_TOK  */
    PERIOD_TOK = 279,              /* PERIOD_TOK  */
    QUESTION_MARK_TOK = 280,       /* QUESTION_MARK_TOK  */
    SINGLE_INVERTED_COMMA = 281,   /* SINGLE_INVERTED_COMMA  */
    DOUBLE_INVERTED_COMMA = 282,   /* DOUBLE_INVERTED_COMMA  */
    ESCAPE_NOTATION_TOK = 283,     /* ESCAPE_NOTATION_TOK  */
    MODULO_TOK = 284,              /* MODULO_TOK  */
    ID_TOK = 285,                  /* ID_TOK  */
    GTE_TOK = 286,                 /* GTE_TOK  */
    LTE_TOK = 287,                 /* LTE_TOK  */
    PLUS_EQUAL_TOK = 288,          /* PLUS_EQUAL_TOK  */
    MINUS_EQUAL_TOK = 289,         /* MINUS_EQUAL_TOK  */
    MUL_EQUAL_TOK = 290,           /* MUL_EQUAL_TOK  */
    DIV_EQUAL_TOK = 291,           /* DIV_EQUAL_TOK  */
    XOR_EQUAL_TOK = 292,           /* XOR_EQUAL_TOK  */
    BIT_AND_EQUAL_TOK = 293,       /* BIT_AND_EQUAL_TOK  */
    BIT_OR_EQUAL_TOK = 294,        /* BIT_OR_EQUAL_TOK  */
    LOG_AND_TOK = 295,             /* LOG_AND_TOK  */
    LOG_OR_TOK = 296,              /* LOG_OR_TOK  */
    EQUAL_EQUAL_TOK = 297,         /* EQUAL_EQUAL_TOK  */
    LEFT_SHIFT_TOK = 298,          /* LEFT_SHIFT_TOK  */
    RIGHT_SHIFT_TOK = 299,         /* RIGHT_SHIFT_TOK  */
    NOT_EQUAL_TOK = 300,           /* NOT_EQUAL_TOK  */
    PLUS_PLUS_TOK = 301,           /* PLUS_PLUS_TOK  */
    MINUS_MINUS_TOK = 302,         /* MINUS_MINUS_TOK  */
    MOD_EQUAL_TOK = 303,           /* MOD_EQUAL_TOK  */
    STRING_LITERAL = 304,          /* STRING_LITERAL  */
    INTEGER_LITERAL = 305,         /* INTEGER_LITERAL  */
    FLOAT_LITERAL = 306,           /* FLOAT_LITERAL  */
    EXP_LITERAL = 307,             /* EXP_LITERAL  */
    CHAR_CONST_TOK = 308,          /* CHAR_CONST_TOK  */
    MAIN_FUNC_TOK = 309,           /* MAIN_FUNC_TOK  */
    INT_TOK = 310,                 /* INT_TOK  */
    FLOAT_TOK = 311,               /* FLOAT_TOK  */
    DOUBLE_TOK = 312,              /* DOUBLE_TOK  */
    AUTO_TOK = 313,                /* AUTO_TOK  */
    CONST_TOK = 314,               /* CONST_TOK  */
    SHORT_TOK = 315,               /* SHORT_TOK  */
    STRUCT_TOK = 316,              /* STRUCT_TOK  */
    UNSIGNED_TOK = 317,            /* UNSIGNED_TOK  */
    BREAK_TOK = 318,               /* BREAK_TOK  */
    CONTINUE_TOK = 319,            /* CONTINUE_TOK  */
    ELSE_TOK = 320,                /* ELSE_TOK  */
    FOR_TOK = 321,                 /* FOR_TOK  */
    LONG_TOK = 322,                /* LONG_TOK  */
    SIGNED_TOK = 323,              /* SIGNED_TOK  */
    SWITCH_TOK = 324,              /* SWITCH_TOK  */
    VOID_TOK = 325,                /* VOID_TOK  */
    CASE_TOK = 326,                /* CASE_TOK  */
    DEFAULT_TOK = 327,             /* DEFAULT_TOK  */
    ENUM_TOK = 328,                /* ENUM_TOK  */
    GOTO_TOK = 329,                /* GOTO_TOK  */
    REGISTER_TOK = 330,            /* REGISTER_TOK  */
    SIZEOF_TOK = 331,              /* SIZEOF_TOK  */
    TYPEDEF_TOK = 332,             /* TYPEDEF_TOK  */
    VOLATILE_TOK = 333,            /* VOLATILE_TOK  */
    CHAR_TOK = 334,                /* CHAR_TOK  */
    DO_TOK = 335,                  /* DO_TOK  */
    EXTERN_TOK = 336,              /* EXTERN_TOK  */
    IF_TOK = 337,                  /* IF_TOK  */
    RETURN_TOK = 338,              /* RETURN_TOK  */
    STATIC_TOK = 339,              /* STATIC_TOK  */
    UNION_TOK = 340,               /* UNION_TOK  */
    WHILE_TOK = 341                /* WHILE_TOK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define LPAREN_TOK 258
#define RPAREN_TOK 259
#define LCURLY_TOK 260
#define RCURLY_TOK 261
#define LBRACKET_TOK 262
#define RBRACKET_TOK 263
#define GT_TOK 264
#define EQUAL_TOK 265
#define LT_TOK 266
#define NOT_TOK 267
#define PLUS_TOK 268
#define MINUS_TOK 269
#define MUL_TOK 270
#define DIV_TOK 271
#define AND_TOK 272
#define OR_TOK 273
#define XOR_TOK 274
#define COLON_TOK 275
#define SEMI_COLON_TOK 276
#define COMMA_TOK 277
#define BITWISE_NOT_TOK 278
#define PERIOD_TOK 279
#define QUESTION_MARK_TOK 280
#define SINGLE_INVERTED_COMMA 281
#define DOUBLE_INVERTED_COMMA 282
#define ESCAPE_NOTATION_TOK 283
#define MODULO_TOK 284
#define ID_TOK 285
#define GTE_TOK 286
#define LTE_TOK 287
#define PLUS_EQUAL_TOK 288
#define MINUS_EQUAL_TOK 289
#define MUL_EQUAL_TOK 290
#define DIV_EQUAL_TOK 291
#define XOR_EQUAL_TOK 292
#define BIT_AND_EQUAL_TOK 293
#define BIT_OR_EQUAL_TOK 294
#define LOG_AND_TOK 295
#define LOG_OR_TOK 296
#define EQUAL_EQUAL_TOK 297
#define LEFT_SHIFT_TOK 298
#define RIGHT_SHIFT_TOK 299
#define NOT_EQUAL_TOK 300
#define PLUS_PLUS_TOK 301
#define MINUS_MINUS_TOK 302
#define MOD_EQUAL_TOK 303
#define STRING_LITERAL 304
#define INTEGER_LITERAL 305
#define FLOAT_LITERAL 306
#define EXP_LITERAL 307
#define CHAR_CONST_TOK 308
#define MAIN_FUNC_TOK 309
#define INT_TOK 310
#define FLOAT_TOK 311
#define DOUBLE_TOK 312
#define AUTO_TOK 313
#define CONST_TOK 314
#define SHORT_TOK 315
#define STRUCT_TOK 316
#define UNSIGNED_TOK 317
#define BREAK_TOK 318
#define CONTINUE_TOK 319
#define ELSE_TOK 320
#define FOR_TOK 321
#define LONG_TOK 322
#define SIGNED_TOK 323
#define SWITCH_TOK 324
#define VOID_TOK 325
#define CASE_TOK 326
#define DEFAULT_TOK 327
#define ENUM_TOK 328
#define GOTO_TOK 329
#define REGISTER_TOK 330
#define SIZEOF_TOK 331
#define TYPEDEF_TOK 332
#define VOLATILE_TOK 333
#define CHAR_TOK 334
#define DO_TOK 335
#define EXTERN_TOK 336
#define IF_TOK 337
#define RETURN_TOK 338
#define STATIC_TOK 339
#define UNION_TOK 340
#define WHILE_TOK 341

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 53 "./C_parser.y"

	// int ival;
	// float fval;
	// double dval;
	// long lval;
	// short shval;	
	// char cval;
	// unsigned short ushval;
	// unsigned char ucval;
	// unsigned int uival;
	// unsigned long ulval;
	// char* idTok;
	char* idval;

#line 254 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

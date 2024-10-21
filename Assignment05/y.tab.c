/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./C_parser.y"

	#include <stdlib.h>
	#include <stdio.h>
	#include "hashTable.h"
	#include "lex.yy.c"
	void yyerror(char*);
	int scope=0;
	hash_map* map;
	char type[LEX_SIZE];

#line 82 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 12 "./C_parser.y"

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

#line 322 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LPAREN_TOK = 3,                 /* LPAREN_TOK  */
  YYSYMBOL_RPAREN_TOK = 4,                 /* RPAREN_TOK  */
  YYSYMBOL_LCURLY_TOK = 5,                 /* LCURLY_TOK  */
  YYSYMBOL_RCURLY_TOK = 6,                 /* RCURLY_TOK  */
  YYSYMBOL_LBRACKET_TOK = 7,               /* LBRACKET_TOK  */
  YYSYMBOL_RBRACKET_TOK = 8,               /* RBRACKET_TOK  */
  YYSYMBOL_GT_TOK = 9,                     /* GT_TOK  */
  YYSYMBOL_EQUAL_TOK = 10,                 /* EQUAL_TOK  */
  YYSYMBOL_LT_TOK = 11,                    /* LT_TOK  */
  YYSYMBOL_NOT_TOK = 12,                   /* NOT_TOK  */
  YYSYMBOL_PLUS_TOK = 13,                  /* PLUS_TOK  */
  YYSYMBOL_MINUS_TOK = 14,                 /* MINUS_TOK  */
  YYSYMBOL_MUL_TOK = 15,                   /* MUL_TOK  */
  YYSYMBOL_DIV_TOK = 16,                   /* DIV_TOK  */
  YYSYMBOL_AND_TOK = 17,                   /* AND_TOK  */
  YYSYMBOL_OR_TOK = 18,                    /* OR_TOK  */
  YYSYMBOL_XOR_TOK = 19,                   /* XOR_TOK  */
  YYSYMBOL_COLON_TOK = 20,                 /* COLON_TOK  */
  YYSYMBOL_SEMI_COLON_TOK = 21,            /* SEMI_COLON_TOK  */
  YYSYMBOL_COMMA_TOK = 22,                 /* COMMA_TOK  */
  YYSYMBOL_BITWISE_NOT_TOK = 23,           /* BITWISE_NOT_TOK  */
  YYSYMBOL_PERIOD_TOK = 24,                /* PERIOD_TOK  */
  YYSYMBOL_QUESTION_MARK_TOK = 25,         /* QUESTION_MARK_TOK  */
  YYSYMBOL_SINGLE_INVERTED_COMMA = 26,     /* SINGLE_INVERTED_COMMA  */
  YYSYMBOL_DOUBLE_INVERTED_COMMA = 27,     /* DOUBLE_INVERTED_COMMA  */
  YYSYMBOL_ESCAPE_NOTATION_TOK = 28,       /* ESCAPE_NOTATION_TOK  */
  YYSYMBOL_MODULO_TOK = 29,                /* MODULO_TOK  */
  YYSYMBOL_ID_TOK = 30,                    /* ID_TOK  */
  YYSYMBOL_GTE_TOK = 31,                   /* GTE_TOK  */
  YYSYMBOL_LTE_TOK = 32,                   /* LTE_TOK  */
  YYSYMBOL_PLUS_EQUAL_TOK = 33,            /* PLUS_EQUAL_TOK  */
  YYSYMBOL_MINUS_EQUAL_TOK = 34,           /* MINUS_EQUAL_TOK  */
  YYSYMBOL_MUL_EQUAL_TOK = 35,             /* MUL_EQUAL_TOK  */
  YYSYMBOL_DIV_EQUAL_TOK = 36,             /* DIV_EQUAL_TOK  */
  YYSYMBOL_XOR_EQUAL_TOK = 37,             /* XOR_EQUAL_TOK  */
  YYSYMBOL_BIT_AND_EQUAL_TOK = 38,         /* BIT_AND_EQUAL_TOK  */
  YYSYMBOL_BIT_OR_EQUAL_TOK = 39,          /* BIT_OR_EQUAL_TOK  */
  YYSYMBOL_LOG_AND_TOK = 40,               /* LOG_AND_TOK  */
  YYSYMBOL_LOG_OR_TOK = 41,                /* LOG_OR_TOK  */
  YYSYMBOL_EQUAL_EQUAL_TOK = 42,           /* EQUAL_EQUAL_TOK  */
  YYSYMBOL_LEFT_SHIFT_TOK = 43,            /* LEFT_SHIFT_TOK  */
  YYSYMBOL_RIGHT_SHIFT_TOK = 44,           /* RIGHT_SHIFT_TOK  */
  YYSYMBOL_NOT_EQUAL_TOK = 45,             /* NOT_EQUAL_TOK  */
  YYSYMBOL_PLUS_PLUS_TOK = 46,             /* PLUS_PLUS_TOK  */
  YYSYMBOL_MINUS_MINUS_TOK = 47,           /* MINUS_MINUS_TOK  */
  YYSYMBOL_MOD_EQUAL_TOK = 48,             /* MOD_EQUAL_TOK  */
  YYSYMBOL_STRING_LITERAL = 49,            /* STRING_LITERAL  */
  YYSYMBOL_INTEGER_LITERAL = 50,           /* INTEGER_LITERAL  */
  YYSYMBOL_FLOAT_LITERAL = 51,             /* FLOAT_LITERAL  */
  YYSYMBOL_EXP_LITERAL = 52,               /* EXP_LITERAL  */
  YYSYMBOL_CHAR_CONST_TOK = 53,            /* CHAR_CONST_TOK  */
  YYSYMBOL_MAIN_FUNC_TOK = 54,             /* MAIN_FUNC_TOK  */
  YYSYMBOL_INT_TOK = 55,                   /* INT_TOK  */
  YYSYMBOL_FLOAT_TOK = 56,                 /* FLOAT_TOK  */
  YYSYMBOL_DOUBLE_TOK = 57,                /* DOUBLE_TOK  */
  YYSYMBOL_AUTO_TOK = 58,                  /* AUTO_TOK  */
  YYSYMBOL_CONST_TOK = 59,                 /* CONST_TOK  */
  YYSYMBOL_SHORT_TOK = 60,                 /* SHORT_TOK  */
  YYSYMBOL_STRUCT_TOK = 61,                /* STRUCT_TOK  */
  YYSYMBOL_UNSIGNED_TOK = 62,              /* UNSIGNED_TOK  */
  YYSYMBOL_BREAK_TOK = 63,                 /* BREAK_TOK  */
  YYSYMBOL_CONTINUE_TOK = 64,              /* CONTINUE_TOK  */
  YYSYMBOL_ELSE_TOK = 65,                  /* ELSE_TOK  */
  YYSYMBOL_FOR_TOK = 66,                   /* FOR_TOK  */
  YYSYMBOL_LONG_TOK = 67,                  /* LONG_TOK  */
  YYSYMBOL_SIGNED_TOK = 68,                /* SIGNED_TOK  */
  YYSYMBOL_SWITCH_TOK = 69,                /* SWITCH_TOK  */
  YYSYMBOL_VOID_TOK = 70,                  /* VOID_TOK  */
  YYSYMBOL_CASE_TOK = 71,                  /* CASE_TOK  */
  YYSYMBOL_DEFAULT_TOK = 72,               /* DEFAULT_TOK  */
  YYSYMBOL_ENUM_TOK = 73,                  /* ENUM_TOK  */
  YYSYMBOL_GOTO_TOK = 74,                  /* GOTO_TOK  */
  YYSYMBOL_REGISTER_TOK = 75,              /* REGISTER_TOK  */
  YYSYMBOL_SIZEOF_TOK = 76,                /* SIZEOF_TOK  */
  YYSYMBOL_TYPEDEF_TOK = 77,               /* TYPEDEF_TOK  */
  YYSYMBOL_VOLATILE_TOK = 78,              /* VOLATILE_TOK  */
  YYSYMBOL_CHAR_TOK = 79,                  /* CHAR_TOK  */
  YYSYMBOL_DO_TOK = 80,                    /* DO_TOK  */
  YYSYMBOL_EXTERN_TOK = 81,                /* EXTERN_TOK  */
  YYSYMBOL_IF_TOK = 82,                    /* IF_TOK  */
  YYSYMBOL_RETURN_TOK = 83,                /* RETURN_TOK  */
  YYSYMBOL_STATIC_TOK = 84,                /* STATIC_TOK  */
  YYSYMBOL_UNION_TOK = 85,                 /* UNION_TOK  */
  YYSYMBOL_WHILE_TOK = 86,                 /* WHILE_TOK  */
  YYSYMBOL_YYACCEPT = 87,                  /* $accept  */
  YYSYMBOL_START = 88,                     /* START  */
  YYSYMBOL_enum_const = 89,                /* enum_const  */
  YYSYMBOL_enum_decl = 90,                 /* enum_decl  */
  YYSYMBOL_enum_init = 91,                 /* enum_init  */
  YYSYMBOL_structure = 92,                 /* structure  */
  YYSYMBOL_struct_decl = 93,               /* struct_decl  */
  YYSYMBOL_function = 94,                  /* function  */
  YYSYMBOL_95_1 = 95,                      /* $@1  */
  YYSYMBOL_96_2 = 96,                      /* $@2  */
  YYSYMBOL_97_3 = 97,                      /* $@3  */
  YYSYMBOL_98_4 = 98,                      /* $@4  */
  YYSYMBOL_99_5 = 99,                      /* $@5  */
  YYSYMBOL_100_6 = 100,                    /* $@6  */
  YYSYMBOL_101_7 = 101,                    /* $@7  */
  YYSYMBOL_102_8 = 102,                    /* $@8  */
  YYSYMBOL_103_9 = 103,                    /* $@9  */
  YYSYMBOL_104_10 = 104,                   /* $@10  */
  YYSYMBOL_105_11 = 105,                   /* $@11  */
  YYSYMBOL_106_12 = 106,                   /* $@12  */
  YYSYMBOL_func_block = 107,               /* func_block  */
  YYSYMBOL_108_13 = 108,                   /* $@13  */
  YYSYMBOL_109_14 = 109,                   /* $@14  */
  YYSYMBOL_110_15 = 110,                   /* $@15  */
  YYSYMBOL_111_16 = 111,                   /* $@16  */
  YYSYMBOL_block = 112,                    /* block  */
  YYSYMBOL_113_17 = 113,                   /* $@17  */
  YYSYMBOL_statements = 114,               /* statements  */
  YYSYMBOL_func_call = 115,                /* func_call  */
  YYSYMBOL_116_18 = 116,                   /* $@18  */
  YYSYMBOL_switch_statement = 117,         /* switch_statement  */
  YYSYMBOL_case_statements = 118,          /* case_statements  */
  YYSYMBOL_case_statement = 119,           /* case_statement  */
  YYSYMBOL_iterative_statement = 120,      /* iterative_statement  */
  YYSYMBOL_121_19 = 121,                   /* $@19  */
  YYSYMBOL_122_20 = 122,                   /* $@20  */
  YYSYMBOL_conditional_statement = 123,    /* conditional_statement  */
  YYSYMBOL_conditional_expression = 124,   /* conditional_expression  */
  YYSYMBOL_ternary_expression = 125,       /* ternary_expression  */
  YYSYMBOL_statement = 126,                /* statement  */
  YYSYMBOL_param = 127,                    /* param  */
  YYSYMBOL_params = 128,                   /* params  */
  YYSYMBOL_expression = 129,               /* expression  */
  YYSYMBOL_logical_expression = 130,       /* logical_expression  */
  YYSYMBOL_arithmetic_expression = 131,    /* arithmetic_expression  */
  YYSYMBOL_relational_expression = 132,    /* relational_expression  */
  YYSYMBOL_data_t = 133,                   /* data_t  */
  YYSYMBOL_data = 134,                     /* data  */
  YYSYMBOL_declarations = 135,             /* declarations  */
  YYSYMBOL_declaration = 136,              /* declaration  */
  YYSYMBOL_array_data = 137,               /* array_data  */
  YYSYMBOL_brackets = 138,                 /* brackets  */
  YYSYMBOL_bracket = 139,                  /* bracket  */
  YYSYMBOL_initializations = 140,          /* initializations  */
  YYSYMBOL_initialization = 141,           /* initialization  */
  YYSYMBOL_datatype = 142,                 /* datatype  */
  YYSYMBOL_storage_class = 143,            /* storage_class  */
  YYSYMBOL_qualifier = 144,                /* qualifier  */
  YYSYMBOL_num_operator = 145,             /* num_operator  */
  YYSYMBOL_relational_operator = 146,      /* relational_operator  */
  YYSYMBOL_logical_operator = 147,         /* logical_operator  */
  YYSYMBOL_assignment_operator = 148,      /* assignment_operator  */
  YYSYMBOL_number_literal = 149,           /* number_literal  */
  YYSYMBOL_other_literal = 150             /* other_literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1629

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  216
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  417

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   341


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   116,   116,   117,   118,   119,   120,   121,   122,   125,
     126,   130,   133,   136,   137,   138,   139,   140,   141,   144,
     145,   147,   147,   147,   148,   148,   148,   149,   149,   149,
     150,   150,   150,   151,   151,   151,   152,   152,   152,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   160,   167,
     167,   168,   169,   170,   173,   174,   175,   176,   177,   178,
     181,   181,   184,   195,   196,   199,   200,   201,   202,   205,
     205,   205,   206,   207,   210,   211,   212,   215,   216,   217,
     218,   219,   222,   225,   226,   227,   228,   229,   230,   231,
     234,   235,   236,   237,   238,   239,   242,   243,   244,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     260,   261,   262,   263,   264,   267,   268,   269,   273,   274,
     275,   278,   279,   281,   282,   283,   284,   287,   288,   291,
     292,   293,   294,   295,   296,   311,   312,   313,   314,   315,
     316,   319,   322,   323,   326,   327,   328,   331,   332,   333,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   369,
     370,   371,   372,   375,   376,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   393,   394,   395,   396,   397,
     398,   401,   402,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   421,   422,   423,   426,   427
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LPAREN_TOK",
  "RPAREN_TOK", "LCURLY_TOK", "RCURLY_TOK", "LBRACKET_TOK", "RBRACKET_TOK",
  "GT_TOK", "EQUAL_TOK", "LT_TOK", "NOT_TOK", "PLUS_TOK", "MINUS_TOK",
  "MUL_TOK", "DIV_TOK", "AND_TOK", "OR_TOK", "XOR_TOK", "COLON_TOK",
  "SEMI_COLON_TOK", "COMMA_TOK", "BITWISE_NOT_TOK", "PERIOD_TOK",
  "QUESTION_MARK_TOK", "SINGLE_INVERTED_COMMA", "DOUBLE_INVERTED_COMMA",
  "ESCAPE_NOTATION_TOK", "MODULO_TOK", "ID_TOK", "GTE_TOK", "LTE_TOK",
  "PLUS_EQUAL_TOK", "MINUS_EQUAL_TOK", "MUL_EQUAL_TOK", "DIV_EQUAL_TOK",
  "XOR_EQUAL_TOK", "BIT_AND_EQUAL_TOK", "BIT_OR_EQUAL_TOK", "LOG_AND_TOK",
  "LOG_OR_TOK", "EQUAL_EQUAL_TOK", "LEFT_SHIFT_TOK", "RIGHT_SHIFT_TOK",
  "NOT_EQUAL_TOK", "PLUS_PLUS_TOK", "MINUS_MINUS_TOK", "MOD_EQUAL_TOK",
  "STRING_LITERAL", "INTEGER_LITERAL", "FLOAT_LITERAL", "EXP_LITERAL",
  "CHAR_CONST_TOK", "MAIN_FUNC_TOK", "INT_TOK", "FLOAT_TOK", "DOUBLE_TOK",
  "AUTO_TOK", "CONST_TOK", "SHORT_TOK", "STRUCT_TOK", "UNSIGNED_TOK",
  "BREAK_TOK", "CONTINUE_TOK", "ELSE_TOK", "FOR_TOK", "LONG_TOK",
  "SIGNED_TOK", "SWITCH_TOK", "VOID_TOK", "CASE_TOK", "DEFAULT_TOK",
  "ENUM_TOK", "GOTO_TOK", "REGISTER_TOK", "SIZEOF_TOK", "TYPEDEF_TOK",
  "VOLATILE_TOK", "CHAR_TOK", "DO_TOK", "EXTERN_TOK", "IF_TOK",
  "RETURN_TOK", "STATIC_TOK", "UNION_TOK", "WHILE_TOK", "$accept", "START",
  "enum_const", "enum_decl", "enum_init", "structure", "struct_decl",
  "function", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8",
  "$@9", "$@10", "$@11", "$@12", "func_block", "$@13", "$@14", "$@15",
  "$@16", "block", "$@17", "statements", "func_call", "$@18",
  "switch_statement", "case_statements", "case_statement",
  "iterative_statement", "$@19", "$@20", "conditional_statement",
  "conditional_expression", "ternary_expression", "statement", "param",
  "params", "expression", "logical_expression", "arithmetic_expression",
  "relational_expression", "data_t", "data", "declarations", "declaration",
  "array_data", "brackets", "bracket", "initializations", "initialization",
  "datatype", "storage_class", "qualifier", "num_operator",
  "relational_operator", "logical_operator", "assignment_operator",
  "number_literal", "other_literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-177)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-144)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     959,  -177,    -6,  1166,    -1,     6,  -177,  -177,  -177,  -177,
    -177,  -177,    35,   -40,    21,    72,  -177,    76,  -177,    84,
    -177,    50,  -177,  -177,  -177,  -177,    90,    19,  -177,  -177,
     959,   959,   959,   139,   420,   149,   159,    26,  1550,   721,
    -177,    -5,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,   182,   434,  -177,  -177,   189,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,    65,
     166,   176,   226,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    1034,    93,   721,   488,  -177,  1003,  -177,   119,   229,  -177,
     124,    -9,   721,     1,  -177,   240,   257,  -177,   491,   494,
     241,   267,  -177,  -177,  -177,   276,  -177,   233,  -177,  1582,
     236,  -177,   262,  1582,  -177,  1034,   258,   268,   290,   291,
    1034,   182,   275,    85,   491,  -177,  1582,  1582,   690,  -177,
    -177,  -177,  -177,   301,   309,  -177,   283,    98,   304,   313,
    -177,  -177,  -177,   491,  -177,  1177,   125,   315,   136,  1219,
     544,  -177,   108,  -177,  -177,   362,  -177,  -177,  1065,   491,
     548,   548,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
     491,   491,   491,   230,   230,   230,   311,   299,   305,   317,
    -177,  1034,  1034,   320,   182,   182,  1261,   587,   587,  -177,
    -177,   182,  -177,   182,  -177,  -177,  -177,  1303,  1582,  -177,
    -177,  -177,  -177,   551,     4,   325,   326,   327,   581,   587,
    -177,   328,   318,  1508,  1582,   108,   108,  1582,  1582,  1582,
    -177,  -177,  -177,     7,  1034,   258,   316,   330,   333,   163,
    1582,   310,  1104,  -177,  -177,   319,   338,  -177,   690,  -177,
    -177,   345,   587,   587,   587,   587,  1582,   350,   356,   359,
     335,  -177,  -177,   373,  -177,   491,  -177,   357,  -177,  -177,
    -177,   349,   351,  -177,   361,  -177,   376,   587,  -177,  -177,
     379,   381,   382,   384,   491,   491,   491,   325,  -177,  1582,
    -177,   368,   370,  -177,  -177,  -177,   154,   154,  -177,  -177,
    -177,  -177,  1345,  1387,  1429,  -177,  -177,   386,  -177,  -177,
    -177,   154,   154,   154,   154,  -177,  -177,  -177,  -177,   849,
     849,   849,   849,  -177,  -177,  -177,  -177,  1121,   392,   396,
     162,   402,   403,   162,   849,   849,   849,   849,   849,   162,
     162,   162,  -177,   378,  -177,  -177,   904,   491,   548,   629,
    -177,  -177,  -177,  -177,  -177,   684,   739,   288,  1003,   411,
     849,   422,   162,  1471,   187,   230,   405,   491,  -177,   418,
     436,   162,   548,   849,   162,   162,   423,   437,  1545,   548,
      16,   354,   201,   794,   849,   439,  -177,   441,   223,   230,
     428,   443,    16,  -177,   194,    12,  -177,  -177,  1003,   440,
     849,  -177,  -177,    47,   849,  -177,   457,   849,   399,   162,
     400,   444,   849,   446,  -177,  -177,  -177
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    85,     0,   135,     0,     0,   163,   164,   165,   179,
     183,   168,     0,     0,     0,     0,   166,     0,   169,     0,
     180,     0,   184,   167,   181,   182,     0,     0,    86,    87,
       6,     5,     7,     0,   128,     0,   148,     0,     0,     0,
     133,     0,   211,   203,   204,   205,   206,   210,   208,   209,
     158,   159,   207,   162,   143,     0,   160,   161,     0,   171,
     175,   177,   173,    88,    89,   170,   174,   176,   172,     0,
       0,     0,     0,     1,     4,     2,     3,    83,   135,   127,
     128,     0,     0,     0,    84,   149,   178,   134,     0,   136,
       0,     0,     0,     0,   144,     0,     0,   142,     0,     0,
       0,   124,   212,   213,   214,     0,   154,     0,   102,   157,
     100,    99,   101,   117,   123,     0,     0,     0,     0,     0,
       0,   134,     0,     0,     0,   153,   152,   117,     0,   147,
      24,   141,    21,   132,     0,   137,     0,     0,   131,     0,
     138,   146,   145,     0,   124,     0,   100,    99,   101,     0,
       0,   112,    81,    77,    78,     0,   125,    60,     0,     0,
       0,     0,   195,   197,   185,   186,   189,   188,   190,   191,
     194,   187,   196,   198,   201,   202,   199,   192,   193,   200,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
      12,     0,     0,     0,   132,   131,     0,    98,    98,    36,
      33,   129,   140,   130,   139,    30,    27,     0,   109,   111,
     116,   119,   114,     0,     0,   124,     0,     0,     0,     0,
     121,     0,   122,     0,   117,    79,    80,   105,   104,   103,
     115,   118,   110,     0,    19,     0,     0,     0,     0,     0,
     109,     0,   124,   215,   216,    97,     0,    90,    94,    95,
      92,     0,    98,    98,    98,    98,   109,     0,     0,     0,
       0,   112,   113,     0,   126,     0,    14,     0,    20,     9,
      11,     0,     0,    17,     0,    91,     0,    98,    25,    22,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    82,
      13,     0,     0,    16,    93,    96,     0,     0,    37,    34,
      31,    28,     0,     0,     0,    15,    18,    39,    48,    26,
      23,     0,     0,     0,     0,   108,   107,   106,    47,    59,
      59,    59,    59,    38,    35,    32,    29,   135,     0,     0,
      53,     0,     0,    53,    59,    59,    59,    59,    59,    53,
      53,    53,    69,     0,    49,    51,    59,     0,     0,    59,
      57,    58,    56,    55,    54,    59,    59,    59,     0,     0,
      59,     0,    53,     0,     0,     0,     0,     0,    46,     0,
       0,    53,     0,    52,    53,    53,     0,     0,     0,     0,
       0,    59,     0,    59,    59,     0,    42,     0,     0,     0,
       0,     0,    64,    50,    53,    53,    40,    44,     0,     0,
      59,    62,    63,    51,    59,    76,     0,    59,    68,    53,
      67,     0,    59,     0,    66,    71,    65
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -177,   225,   234,  -177,  -177,  -177,  -109,  -177,  -177,  -177,
    -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,  -177,
     -13,  -177,  -177,  -177,  -177,    57,  -177,   -85,   -25,  -177,
    -177,    78,  -177,  -177,  -177,  -177,    77,   -94,  -177,   156,
     252,    14,   -75,   -89,   -80,   -86,  -177,   -51,   -20,   -34,
     102,    -2,  -177,   388,  -176,    59,  -177,   142,   -87,   -11,
     -10,   -32,  -177,  -177
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    27,   189,    28,    29,    30,   186,    31,   198,   297,
     197,   296,   255,   314,   254,   313,   253,   312,   252,   311,
     309,   319,   320,   321,   322,   384,   360,   362,   334,   219,
     335,   391,   392,   336,   358,   415,   337,   107,   108,   338,
     245,   246,   109,   110,   111,   112,   221,   224,    33,    34,
      89,   131,    54,    35,    36,    81,    38,    82,   180,   181,
     182,    55,   114,   250
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    53,    83,    94,   113,   152,    86,   260,   126,   146,
     153,   193,   148,   154,    79,    59,    86,   344,   147,    73,
      60,   249,   249,   145,    40,    95,   183,    61,   266,    56,
     106,   138,   127,   345,   261,   146,    57,   267,   148,    62,
     183,    86,    63,   249,   147,    96,    80,   149,   155,   196,
      10,   128,    97,   -73,   146,   139,    87,   148,   125,    37,
      79,   216,   183,   147,   217,    58,   225,   226,   207,    22,
     116,   153,   153,   149,   154,   154,   249,   249,   249,   249,
      88,   187,   237,   238,   223,    10,   187,   389,   390,    37,
      37,    37,   149,    64,   331,   117,    83,    91,    93,   218,
      86,   249,   184,   185,    22,   227,   228,   229,    86,   155,
     155,    70,   -73,    86,    69,   195,   184,   185,   -73,   -73,
      72,   257,   130,   121,   216,   268,    41,   217,   203,   209,
     -73,    65,   230,   231,   232,    71,    66,   183,   184,   185,
     211,   123,    39,    67,   184,   185,   247,   247,   160,   161,
     -77,   137,    10,   257,   133,    68,    32,   187,   187,   307,
      77,   -78,   218,   248,   248,   -77,   -77,   344,   247,   257,
      84,    22,    39,    39,    39,   308,   -78,   -78,   134,    90,
      92,    85,   369,   345,   273,   248,    32,    32,    32,    41,
     289,   375,   135,   274,   115,   140,   118,   258,   259,   344,
     187,   247,   247,   247,   247,   394,   119,   184,   185,   302,
     303,   304,   251,   184,   185,   403,    83,   222,   248,   248,
     248,   248,   406,   122,   135,   140,   247,   160,   161,   258,
     259,   120,   132,   136,   333,   339,   340,   341,   202,   204,
      53,   160,   161,   248,   398,   258,   259,   100,   141,   350,
     351,   352,   353,   354,   364,    74,    75,    76,   159,   153,
     144,   -77,   154,   160,   161,   142,   280,   281,   282,   283,
     157,   156,   363,   160,   161,   371,   -77,   -77,   382,   158,
     102,   103,   104,   153,   310,   388,   154,   -78,   188,   190,
     153,   295,   378,   154,   368,   191,   192,   155,   323,   324,
     325,   326,   -78,   -78,   199,   194,   105,   205,    41,     1,
       2,    41,   200,   201,   376,   408,   206,   233,   327,   210,
     234,   155,   410,   236,   128,    53,   239,   235,   155,   262,
     209,   211,   264,    86,     4,     5,   271,   270,   399,   272,
     275,   277,   278,     6,     7,     8,     9,    10,    11,   279,
      13,    14,    15,   284,   328,    16,    17,   329,    18,   285,
     393,    19,   286,    20,   128,   287,    22,    23,   330,    24,
     331,   162,    25,   163,   332,     1,     2,   288,   290,   291,
     294,   292,   293,   298,   327,   299,   300,   346,   301,   305,
     349,   306,   318,   172,   173,   342,   355,   356,   357,   343,
       4,     5,   174,   175,   176,   347,   348,   179,   359,     6,
       7,     8,     9,    10,    11,   370,    13,    14,    15,   373,
     328,    16,    17,   329,    18,   372,   377,    19,   381,    20,
      42,   383,    22,    23,   330,    24,   331,    98,    25,   379,
     332,   380,     2,   386,   385,   396,    99,   397,   400,   401,
      78,   100,   404,    43,    44,    45,    46,    47,    48,    49,
     407,   409,   411,   413,   101,   414,   412,   416,    52,   269,
     402,   263,   405,   129,     0,     6,     7,     8,     9,    10,
      11,     0,    13,     0,   102,   103,   104,    16,    17,     0,
      18,   124,     0,     0,   143,    20,     0,   150,    22,    23,
      99,    24,     0,    99,    25,   100,    99,     0,   100,     0,
     105,   100,     0,     0,     0,     0,     0,     0,   101,     0,
       0,   144,     0,     0,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   103,
     104,   102,   103,   104,   102,   103,   104,   213,     0,     0,
       0,   213,     0,     0,   213,     0,   214,     0,     0,     0,
      99,   100,     0,   214,   105,   100,     0,   105,   100,     0,
     105,     0,     0,     0,   215,     0,     0,     0,   144,     0,
       0,   144,     0,     0,     0,   212,     0,     0,     0,     0,
     162,     0,   163,     0,   102,   103,   104,     0,   102,   103,
     104,   102,   103,   104,   241,     0,     0,     0,     0,     2,
       0,     0,   172,   173,     0,     0,     0,   242,     0,     0,
     105,   174,   175,   176,   105,     0,   179,   105,     0,     0,
       0,     0,     0,     4,     5,     0,   243,   102,   103,   104,
     244,     0,     6,     7,     8,     9,    10,    11,     0,    13,
       1,     2,     0,     0,    16,    17,     0,    18,     0,   327,
       0,     0,    20,   105,     0,    22,    23,     0,    24,     0,
       0,    25,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,     0,   328,    16,    17,   329,    18,
      42,     0,    19,     0,    20,     1,     2,    22,    23,   330,
      24,   331,   365,    25,   327,   332,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
       4,     5,     0,     0,     0,     0,     0,     0,    52,     6,
       7,     8,     9,    10,    11,     0,    13,    14,    15,     0,
     328,    16,    17,   329,    18,     0,     0,    19,     0,    20,
       1,     2,    22,    23,   330,    24,   331,   366,    25,   327,
     332,     0,     0,     0,     0,     0,     6,     7,     8,     0,
       0,    11,     0,    13,     0,     4,     5,     0,    16,    17,
       0,    18,     0,     0,     6,     7,     8,     9,    10,    11,
      23,    13,    14,    15,     0,   328,    16,    17,   329,    18,
       0,     0,    19,     0,    20,     1,     2,    22,    23,   330,
      24,   331,   367,    25,   327,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,     0,    13,    14,    15,   395,
     328,    16,    17,   329,    18,     0,     0,    19,     0,    20,
       1,     2,    22,    23,   330,    24,   331,     0,    25,   327,
     332,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,     0,   328,    16,    17,   329,    18,
       0,     0,    19,     0,    20,     1,     2,    22,    23,   330,
      24,   331,     0,    25,   327,   332,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,     0,    13,    14,    15,     0,
     328,    16,    17,   329,    18,     0,     0,    19,     0,    20,
       1,     2,    22,    23,   330,    24,   331,     0,    25,     3,
     361,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     0,     2,    16,    17,     0,    18,
       0,     0,    19,     3,    20,     0,    21,    22,    23,     0,
      24,     0,     0,    25,    26,     0,     0,     0,     0,     4,
       5,     0,     0,     0,     0,     0,     2,     0,     6,     7,
       8,     9,    10,    11,    78,    13,     0,     0,     0,     0,
      16,    17,     0,    18,     0,     0,     0,     0,    20,     0,
       0,    22,    23,     0,    24,     0,     0,    25,     0,     6,
       7,     8,     9,    10,    11,   220,    13,     0,     0,     0,
       0,    16,    17,     0,    18,     0,     0,   276,     0,    20,
       0,    41,    22,    23,    42,    24,     0,     0,    25,     0,
       6,     7,     8,     0,   157,    11,     0,    13,    41,     0,
       0,    42,    16,    17,     0,    18,     0,    43,    44,    45,
      46,    47,    48,    49,    23,     0,     0,     0,     0,     0,
      50,    51,    52,     0,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,    50,    51,    52,
    -143,     0,     0,    41,     0,     0,    42,     0,     0,     0,
       0,   208,     0,     0,     0,     0,   162,     0,   163,     0,
     164,   165,   166,   167,   168,   169,   170,     0,     0,    43,
      44,    45,    46,    47,    48,    49,   171,     0,   172,   173,
       0,     0,    50,    51,    52,     0,     0,   174,   175,   176,
     177,   178,   179,   212,     0,     0,     0,     0,   162,     0,
     163,     0,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     172,   173,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   179,   240,     0,     0,     0,     0,
     162,     0,   163,     0,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,   177,   178,   179,   256,     0,     0,
       0,     0,   162,     0,   163,     0,   164,   165,   166,   167,
     168,   169,   170,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,   172,   173,     0,     0,     0,     0,
       0,     0,     0,   174,   175,   176,   177,   178,   179,   315,
       0,     0,     0,     0,   162,     0,   163,     0,   164,   165,
     166,   167,   168,   169,   170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,     0,   172,   173,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   316,     0,     0,     0,     0,   162,     0,   163,     0,
     164,   165,   166,   167,   168,   169,   170,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,     0,   172,   173,
       0,     0,     0,     0,     0,     0,     0,   174,   175,   176,
     177,   178,   179,   317,     0,     0,     0,     0,   162,     0,
     163,     0,   164,   165,   166,   167,   168,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     172,   173,     0,     0,     0,     0,     0,     0,     0,   174,
     175,   176,   177,   178,   179,   374,     0,     0,     0,     0,
     162,     0,   163,     0,   164,   165,   166,   167,   168,   169,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     171,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,   174,   175,   176,   177,   178,   179,   162,     0,   163,
       0,   164,   165,   166,   167,   168,   169,   170,   265,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,   177,   178,   179,   162,     0,   163,     0,   164,   165,
     166,   167,   168,   169,   170,     0,   387,     0,     0,     0,
       0,     0,     0,     0,   171,     0,   172,   173,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   162,     0,   163,     0,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     6,     7,     8,     0,    10,
      11,   171,    13,   172,   173,     0,     0,    16,    17,     0,
      18,     0,   174,   175,   176,   177,   178,   179,    22,    23
};

static const yytype_int16 yycheck[] =
{
      34,     3,    34,     8,    55,    99,    15,     3,    83,    98,
      99,   120,    98,    99,    34,    55,    15,     5,    98,     0,
      60,   197,   198,    98,    30,    30,   113,    67,    21,    30,
      55,    30,    83,    21,    30,   124,    30,    30,   124,    79,
     127,    15,    21,   219,   124,    50,    80,    98,    99,   124,
      59,    85,    54,     6,   143,    54,    30,   143,    83,     0,
      80,   150,   149,   143,   150,    30,   160,   161,   143,    78,
       5,   160,   161,   124,   160,   161,   252,   253,   254,   255,
      54,   115,   191,   192,   159,    59,   120,    71,    72,    30,
      31,    32,   143,    21,    82,    30,   128,    38,    39,   150,
      15,   277,   113,   113,    78,   180,   181,   182,    15,   160,
     161,    61,    65,    15,    30,    30,   127,   127,    71,    72,
      30,   208,     3,    30,   213,   234,     7,   213,    30,     4,
      83,    55,   183,   184,   185,    85,    60,   224,   149,   149,
       4,    82,     0,    67,   155,   155,   197,   198,    40,    41,
      25,    92,    59,   240,    30,    79,     0,   191,   192,     5,
      21,    25,   213,   197,   198,    40,    41,     5,   219,   256,
      21,    78,    30,    31,    32,    21,    40,    41,    54,    37,
      38,    22,   358,    21,    21,   219,    30,    31,    32,     7,
     265,     4,    90,    30,     5,    93,    30,   208,   208,     5,
     234,   252,   253,   254,   255,     4,    30,   218,   218,   284,
     285,   286,   198,   224,   224,    21,   248,   158,   252,   253,
     254,   255,   398,    81,   122,   123,   277,    40,    41,   240,
     240,     5,     3,    91,   319,   320,   321,   322,   136,   137,
     242,    40,    41,   277,    21,   256,   256,    17,     8,   334,
     335,   336,   337,   338,   348,    30,    31,    32,    25,   348,
      30,    25,   348,    40,    41,     8,   252,   253,   254,   255,
       3,    30,   347,    40,    41,   360,    40,    41,   372,     3,
      50,    51,    52,   372,   297,   379,   372,    25,    30,    21,
     379,   277,   367,   379,     6,     5,     5,   348,   311,   312,
     313,   314,    40,    41,     3,    30,    76,     3,     7,    21,
      22,     7,     3,    30,   365,   400,     3,     6,    30,     4,
      21,   372,   407,     6,   358,   327,     6,    22,   379,     4,
       4,     4,     4,    15,    46,    47,     6,    21,   389,     6,
      30,    22,     4,    55,    56,    57,    58,    59,    60,     4,
      62,    63,    64,     3,    66,    67,    68,    69,    70,     3,
       6,    73,     3,    75,   398,    30,    78,    79,    80,    81,
      82,     9,    84,    11,    86,    21,    22,     4,    21,    30,
       4,    30,    21,     4,    30,     4,     4,   330,     4,    21,
     333,    21,     6,    31,    32,     3,   339,   340,   341,     3,
      46,    47,    40,    41,    42,     3,     3,    45,    30,    55,
      56,    57,    58,    59,    60,     4,    62,    63,    64,   362,
      66,    67,    68,    69,    70,     3,    21,    73,   371,    75,
      10,   374,    78,    79,    80,    81,    82,     3,    84,    21,
      86,     5,    22,     6,    21,     6,    12,     6,    20,     6,
      30,    17,   395,    33,    34,    35,    36,    37,    38,    39,
      20,     4,    63,    63,    30,    21,   409,    21,    48,   235,
     392,   219,   395,    85,    -1,    55,    56,    57,    58,    59,
      60,    -1,    62,    -1,    50,    51,    52,    67,    68,    -1,
      70,     3,    -1,    -1,     3,    75,    -1,     3,    78,    79,
      12,    81,    -1,    12,    84,    17,    12,    -1,    17,    -1,
      76,    17,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    30,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,
      52,    50,    51,    52,    50,    51,    52,     3,    -1,    -1,
      -1,     3,    -1,    -1,     3,    -1,    12,    -1,    -1,    -1,
      12,    17,    -1,    12,    76,    17,    -1,    76,    17,    -1,
      76,    -1,    -1,    -1,    30,    -1,    -1,    -1,    30,    -1,
      -1,    30,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    50,    51,    52,    -1,    50,    51,
      52,    50,    51,    52,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    31,    32,    -1,    -1,    -1,    30,    -1,    -1,
      76,    40,    41,    42,    76,    -1,    45,    76,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    62,
      21,    22,    -1,    -1,    67,    68,    -1,    70,    -1,    30,
      -1,    -1,    75,    76,    -1,    78,    79,    -1,    81,    -1,
      -1,    84,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      10,    -1,    73,    -1,    75,    21,    22,    78,    79,    80,
      81,    82,    83,    84,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    48,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    73,    -1,    75,
      21,    22,    78,    79,    80,    81,    82,    83,    84,    30,
      86,    -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    60,    -1,    62,    -1,    46,    47,    -1,    67,    68,
      -1,    70,    -1,    -1,    55,    56,    57,    58,    59,    60,
      79,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      -1,    -1,    73,    -1,    75,    21,    22,    78,    79,    80,
      81,    82,    83,    84,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    -1,    73,    -1,    75,
      21,    22,    78,    79,    80,    81,    82,    -1,    84,    30,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      -1,    -1,    73,    -1,    75,    21,    22,    78,    79,    80,
      81,    82,    -1,    84,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    68,    69,    70,    -1,    -1,    73,    -1,    75,
      21,    22,    78,    79,    80,    81,    82,    -1,    84,    30,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    -1,    22,    67,    68,    -1,    70,
      -1,    -1,    73,    30,    75,    -1,    77,    78,    79,    -1,
      81,    -1,    -1,    84,    85,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    22,    -1,    55,    56,
      57,    58,    59,    60,    30,    62,    -1,    -1,    -1,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    75,    -1,
      -1,    78,    79,    -1,    81,    -1,    -1,    84,    -1,    55,
      56,    57,    58,    59,    60,    30,    62,    -1,    -1,    -1,
      -1,    67,    68,    -1,    70,    -1,    -1,     3,    -1,    75,
      -1,     7,    78,    79,    10,    81,    -1,    -1,    84,    -1,
      55,    56,    57,    -1,     3,    60,    -1,    62,     7,    -1,
      -1,    10,    67,    68,    -1,    70,    -1,    33,    34,    35,
      36,    37,    38,    39,    79,    -1,    -1,    -1,    -1,    -1,
      46,    47,    48,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
       4,    -1,    -1,     7,    -1,    -1,    10,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    29,    -1,    31,    32,
      -1,    -1,    46,    47,    48,    -1,    -1,    40,    41,    42,
      43,    44,    45,     4,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,     4,    -1,    -1,
      -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,     4,
      -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,     4,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,     4,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,     9,    -1,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,     9,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    29,    62,    31,    32,    -1,    -1,    67,    68,    -1,
      70,    -1,    40,    41,    42,    43,    44,    45,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    30,    46,    47,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    67,    68,    70,    73,
      75,    77,    78,    79,    81,    84,    85,    88,    90,    91,
      92,    94,   126,   135,   136,   140,   141,   142,   143,   144,
      30,     7,    10,    33,    34,    35,    36,    37,    38,    39,
      46,    47,    48,   138,   139,   148,    30,    30,    30,    55,
      60,    67,    79,    21,    21,    55,    60,    67,    79,    30,
      61,    85,    30,     0,    88,    88,    88,    21,    30,   135,
     136,   142,   144,   148,    21,    22,    15,    30,    54,   137,
     144,   142,   144,   142,     8,    30,    50,   138,     3,    12,
      17,    30,    50,    51,    52,    76,   115,   124,   125,   129,
     130,   131,   132,   134,   149,     5,     5,    30,    30,    30,
       5,    30,   144,   142,     3,   115,   129,   134,   136,   140,
       3,   138,     3,    30,    54,   137,   144,   142,    30,    54,
     137,     8,     8,     3,    30,   129,   130,   131,   132,   134,
       3,    30,   124,   130,   132,   134,    30,     3,     3,    25,
      40,    41,     9,    11,    13,    14,    15,    16,    17,    18,
      19,    29,    31,    32,    40,    41,    42,    43,    44,    45,
     145,   146,   147,   145,   146,   147,    93,   136,    30,    89,
      21,     5,     5,    93,    30,    30,   129,    97,    95,     3,
       3,    30,   137,    30,   137,     3,     3,   129,     4,     4,
       4,     4,     4,     3,    12,    30,   130,   132,   134,   116,
      30,   133,   142,   129,   134,   124,   124,   129,   129,   129,
     134,   134,   134,     6,    21,    22,     6,    93,    93,     6,
       4,    17,    30,    49,    53,   127,   128,   134,   136,   141,
     150,   128,   105,   103,   101,    99,     4,   145,   146,   147,
       3,    30,     4,   127,     4,    20,    21,    30,    93,    89,
      21,     6,     6,    21,    30,    30,     3,    22,     4,     4,
     128,   128,   128,   128,     3,     3,     3,    30,     4,   129,
      21,    30,    30,    21,     4,   128,    98,    96,     4,     4,
       4,     4,   129,   129,   129,    21,    21,     5,    21,   107,
     107,   106,   104,   102,   100,     4,     4,     4,     6,   108,
     109,   110,   111,   107,   107,   107,   107,    30,    66,    69,
      80,    82,    86,   114,   115,   117,   120,   123,   126,   114,
     114,   114,     3,     3,     5,    21,   112,     3,     3,   112,
     114,   114,   114,   114,   114,   112,   112,   112,   121,    30,
     113,    86,   114,   129,   124,    83,    83,    83,     6,   141,
       4,   114,     3,   112,     4,     4,   134,    21,   129,    21,
       5,   112,   124,   112,   112,    21,     6,    21,   124,    71,
      72,   118,   119,     6,     4,    65,     6,     6,    21,   134,
      20,     6,   118,    21,   112,   123,   141,    20,   114,     4,
     114,    63,   112,    63,    21,   122,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    95,    96,    94,    97,    98,    94,    99,   100,    94,
     101,   102,    94,   103,   104,    94,   105,   106,    94,   108,
     107,   109,   107,   110,   107,   111,   107,   107,   107,   113,
     112,   112,   112,   112,   114,   114,   114,   114,   114,   114,
     116,   115,   117,   118,   118,   119,   119,   119,   119,   121,
     122,   120,   120,   120,   123,   123,   123,   124,   124,   124,
     124,   124,   125,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   127,   127,   127,   127,   128,   128,   128,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   130,   130,   131,   131,   131,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   143,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   146,   146,   146,   146,   146,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   150,   150
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     0,     3,
       1,     6,     4,     7,     6,     8,     7,     6,     8,     2,
       3,     0,     0,     8,     0,     0,     8,     0,     0,     9,
       0,     0,     9,     0,     0,     9,     0,     0,     9,     0,
       8,     0,     7,     0,     8,     0,     5,     2,     1,     0,
       5,     1,     3,     0,     2,     2,     2,     2,     2,     0,
       0,     5,     7,     2,     1,     6,     5,     4,     3,     0,
       0,    11,     5,     7,     5,     7,     7,     1,     1,     3,
       3,     2,     5,     2,     2,     1,     1,     1,     2,     2,
       1,     2,     1,     3,     1,     1,     3,     1,     0,     1,
       1,     1,     1,     3,     3,     3,     7,     7,     7,     3,
       3,     3,     2,     4,     3,     3,     3,     1,     3,     3,
       3,     1,     1,     1,     1,     2,     4,     2,     1,     4,
       4,     3,     3,     2,     2,     1,     2,     3,     3,     4,
       4,     2,     2,     0,     2,     3,     3,     3,     1,     0,
       3,     5,     3,     3,     3,     3,     5,     3,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 11: /* enum_decl: ENUM_TOK ID_TOK LCURLY_TOK enum_const RCURLY_TOK SEMI_COLON_TOK  */
#line 130 "./C_parser.y"
                                                                                                        {fprintf(yyout,"\nParsed an enum declaration at line no:- %d\n",yylineno);}
#line 1998 "y.tab.c"
    break;

  case 12: /* enum_init: ENUM_TOK ID_TOK ID_TOK SEMI_COLON_TOK  */
#line 133 "./C_parser.y"
                                                                              {fprintf(yyout,"\nParsed an enum initialisation at line no:- %d\n",yylineno);}
#line 2004 "y.tab.c"
    break;

  case 13: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 136 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 2010 "y.tab.c"
    break;

  case 14: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 137 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 2016 "y.tab.c"
    break;

  case 15: /* structure: TYPEDEF_TOK STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 138 "./C_parser.y"
                                                                                                                                      {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 2022 "y.tab.c"
    break;

  case 16: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 139 "./C_parser.y"
                                                                                                                         {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 2028 "y.tab.c"
    break;

  case 17: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 140 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 2034 "y.tab.c"
    break;

  case 18: /* structure: TYPEDEF_TOK UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 141 "./C_parser.y"
                                                                                                                                     {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 2040 "y.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 147 "./C_parser.y"
                                                                          {scope++;}
#line 2046 "y.tab.c"
    break;

  case 22: /* $@2: %empty  */
#line 147 "./C_parser.y"
                                                                                                      {hashMapRemoveScope(map,scope);scope--;}
#line 2052 "y.tab.c"
    break;

  case 23: /* function: datatype MAIN_FUNC_TOK LPAREN_TOK $@1 params RPAREN_TOK $@2 func_block  */
#line 147 "./C_parser.y"
                                                                                                                                                         {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2058 "y.tab.c"
    break;

  case 24: /* $@3: %empty  */
#line 148 "./C_parser.y"
                                                                           {scope++;}
#line 2064 "y.tab.c"
    break;

  case 25: /* $@4: %empty  */
#line 148 "./C_parser.y"
                                                                                                       {hashMapRemoveScope(map,scope);scope--;}
#line 2070 "y.tab.c"
    break;

  case 26: /* function: datatype ID_TOK LPAREN_TOK $@3 params RPAREN_TOK $@4 func_block  */
#line 148 "./C_parser.y"
                                                                                                                                                          {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2076 "y.tab.c"
    break;

  case 27: /* $@5: %empty  */
#line 149 "./C_parser.y"
                                                                                            {scope++;}
#line 2082 "y.tab.c"
    break;

  case 28: /* $@6: %empty  */
#line 149 "./C_parser.y"
                                                                                                                        {hashMapRemoveScope(map,scope);scope--;}
#line 2088 "y.tab.c"
    break;

  case 29: /* function: qualifier datatype MAIN_FUNC_TOK LPAREN_TOK $@5 params RPAREN_TOK $@6 func_block  */
#line 149 "./C_parser.y"
                                                                                                                                                                           {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2094 "y.tab.c"
    break;

  case 30: /* $@7: %empty  */
#line 150 "./C_parser.y"
                                                                                     {scope++;}
#line 2100 "y.tab.c"
    break;

  case 31: /* $@8: %empty  */
#line 150 "./C_parser.y"
                                                                                                                 {hashMapRemoveScope(map,scope);scope--;}
#line 2106 "y.tab.c"
    break;

  case 32: /* function: qualifier datatype ID_TOK LPAREN_TOK $@7 params RPAREN_TOK $@8 func_block  */
#line 150 "./C_parser.y"
                                                                                                                                                                    {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2112 "y.tab.c"
    break;

  case 33: /* $@9: %empty  */
#line 151 "./C_parser.y"
                                                                                            {scope++;}
#line 2118 "y.tab.c"
    break;

  case 34: /* $@10: %empty  */
#line 151 "./C_parser.y"
                                                                                                                        {hashMapRemoveScope(map,scope);scope--;}
#line 2124 "y.tab.c"
    break;

  case 35: /* function: datatype qualifier MAIN_FUNC_TOK LPAREN_TOK $@9 params RPAREN_TOK $@10 func_block  */
#line 151 "./C_parser.y"
                                                                                                                                                                           {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2130 "y.tab.c"
    break;

  case 36: /* $@11: %empty  */
#line 152 "./C_parser.y"
                                                                                     {scope++;}
#line 2136 "y.tab.c"
    break;

  case 37: /* $@12: %empty  */
#line 152 "./C_parser.y"
                                                                                                                 {hashMapRemoveScope(map,scope);scope--;}
#line 2142 "y.tab.c"
    break;

  case 38: /* function: datatype qualifier ID_TOK LPAREN_TOK $@11 params RPAREN_TOK $@12 func_block  */
#line 152 "./C_parser.y"
                                                                                                                                                                    {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2148 "y.tab.c"
    break;

  case 39: /* $@13: %empty  */
#line 155 "./C_parser.y"
                                                   {scope++;}
#line 2154 "y.tab.c"
    break;

  case 40: /* func_block: LCURLY_TOK $@13 statements block RETURN_TOK data SEMI_COLON_TOK RCURLY_TOK  */
#line 155 "./C_parser.y"
                                                                                                                         {hashMapRemoveScope(map,scope);scope--;}
#line 2160 "y.tab.c"
    break;

  case 41: /* $@14: %empty  */
#line 156 "./C_parser.y"
                                                           {scope++;}
#line 2166 "y.tab.c"
    break;

  case 42: /* func_block: LCURLY_TOK $@14 statements block RETURN_TOK SEMI_COLON_TOK RCURLY_TOK  */
#line 156 "./C_parser.y"
                                                                                                                           {hashMapRemoveScope(map,scope);scope--;}
#line 2172 "y.tab.c"
    break;

  case 43: /* $@15: %empty  */
#line 157 "./C_parser.y"
                                                           {scope++;}
#line 2178 "y.tab.c"
    break;

  case 44: /* func_block: LCURLY_TOK $@15 statements block RETURN_TOK expression SEMI_COLON_TOK RCURLY_TOK  */
#line 157 "./C_parser.y"
                                                                                                                                       {hashMapRemoveScope(map,scope);scope--;}
#line 2184 "y.tab.c"
    break;

  case 45: /* $@16: %empty  */
#line 158 "./C_parser.y"
                                                           {scope++;}
#line 2190 "y.tab.c"
    break;

  case 46: /* func_block: LCURLY_TOK $@16 statements block RCURLY_TOK  */
#line 158 "./C_parser.y"
                                                                                                  {hashMapRemoveScope(map,scope);scope--;}
#line 2196 "y.tab.c"
    break;

  case 49: /* $@17: %empty  */
#line 167 "./C_parser.y"
                                                   {scope++;}
#line 2202 "y.tab.c"
    break;

  case 50: /* block: LCURLY_TOK $@17 statements block RCURLY_TOK  */
#line 167 "./C_parser.y"
                                                                                         {hashMapRemoveScope(map,scope);scope--;}
#line 2208 "y.tab.c"
    break;

  case 60: /* $@18: %empty  */
#line 181 "./C_parser.y"
                                                          {scope++;}
#line 2214 "y.tab.c"
    break;

  case 61: /* func_call: ID_TOK LPAREN_TOK $@18 param RPAREN_TOK  */
#line 181 "./C_parser.y"
                                                                                     {hashMapRemoveScope(map,scope);scope--;}
#line 2220 "y.tab.c"
    break;

  case 62: /* switch_statement: SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_statements RCURLY_TOK  */
#line 185 "./C_parser.y"
                                                 {
							if(!hashMapIsPresent(map,(yyvsp[-4].idval)))
							{
								fprintf(yyout,"\n Variable %s is not declared \n",(yyvsp[-4].idval));
								exit(EXIT_FAILURE);
							}
							fprintf(yyout,"\nParsed a switch block at line no:- %d\n",yylineno);
						 }
#line 2233 "y.tab.c"
    break;

  case 65: /* case_statement: CASE_TOK data COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 199 "./C_parser.y"
                                                                                             {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2239 "y.tab.c"
    break;

  case 66: /* case_statement: DEFAULT_TOK COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 200 "./C_parser.y"
                                                                                                           {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2245 "y.tab.c"
    break;

  case 67: /* case_statement: CASE_TOK data COLON_TOK statements  */
#line 201 "./C_parser.y"
                                                                                    {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2251 "y.tab.c"
    break;

  case 68: /* case_statement: DEFAULT_TOK COLON_TOK statements  */
#line 202 "./C_parser.y"
                                                                                  {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2257 "y.tab.c"
    break;

  case 69: /* $@19: %empty  */
#line 205 "./C_parser.y"
                                                   {scope++;}
#line 2263 "y.tab.c"
    break;

  case 70: /* $@20: %empty  */
#line 205 "./C_parser.y"
                                                                                                                                                                 {scope--;}
#line 2269 "y.tab.c"
    break;

  case 71: /* iterative_statement: FOR_TOK LPAREN_TOK $@19 initialization SEMI_COLON_TOK conditional_expression SEMI_COLON_TOK initialization RPAREN_TOK block $@20  */
#line 205 "./C_parser.y"
                                                                                                                                                                            {fprintf(yyout,"\nParsed a for loop at line no:- %d\n",yylineno);}
#line 2275 "y.tab.c"
    break;

  case 72: /* iterative_statement: WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK block  */
#line 206 "./C_parser.y"
                                                                                                              {fprintf(yyout,"\nParsed a while loop at line no:- %d\n",yylineno);}
#line 2281 "y.tab.c"
    break;

  case 73: /* iterative_statement: DO_TOK block WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK SEMI_COLON_TOK  */
#line 207 "./C_parser.y"
                                                                                                                                    {fprintf(yyout,"\nParsed a do while at line no:- %d\n",yylineno);}
#line 2287 "y.tab.c"
    break;

  case 74: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block  */
#line 210 "./C_parser.y"
                                                                       {fprintf(yyout,"\nParsed an if statement at line no:- %d\n",yylineno);}
#line 2293 "y.tab.c"
    break;

  case 75: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK block  */
#line 211 "./C_parser.y"
                                                                                                              {fprintf(yyout,"\nParsed an if else statement at line no:- %d\n",yylineno);}
#line 2299 "y.tab.c"
    break;

  case 76: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK conditional_statement  */
#line 212 "./C_parser.y"
                                                                                                                              {fprintf(yyout,"\nParsed an if else statement at line no:- %d\n",yylineno);}
#line 2305 "y.tab.c"
    break;

  case 82: /* ternary_expression: conditional_expression QUESTION_MARK_TOK expression COLON_TOK expression  */
#line 222 "./C_parser.y"
                                                                                                          {fprintf(yyout,"\nParsed a ternary expression at line no:- %d\n",yylineno);}
#line 2311 "y.tab.c"
    break;

  case 110: /* logical_expression: data logical_operator data  */
#line 260 "./C_parser.y"
                                                            {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2317 "y.tab.c"
    break;

  case 111: /* logical_expression: LPAREN_TOK logical_expression RPAREN_TOK  */
#line 261 "./C_parser.y"
                                                                                         {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2323 "y.tab.c"
    break;

  case 112: /* logical_expression: NOT_TOK ID_TOK  */
#line 262 "./C_parser.y"
                                                               {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2329 "y.tab.c"
    break;

  case 113: /* logical_expression: NOT_TOK LPAREN_TOK ID_TOK RPAREN_TOK  */
#line 263 "./C_parser.y"
                                                                                     {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2335 "y.tab.c"
    break;

  case 114: /* logical_expression: LPAREN_TOK data RPAREN_TOK  */
#line 264 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2341 "y.tab.c"
    break;

  case 115: /* arithmetic_expression: data num_operator data  */
#line 267 "./C_parser.y"
                                               {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2347 "y.tab.c"
    break;

  case 116: /* arithmetic_expression: LPAREN_TOK arithmetic_expression RPAREN_TOK  */
#line 268 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2353 "y.tab.c"
    break;

  case 117: /* arithmetic_expression: data  */
#line 269 "./C_parser.y"
                                                     {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2359 "y.tab.c"
    break;

  case 118: /* relational_expression: data relational_operator data  */
#line 273 "./C_parser.y"
                                                      {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2365 "y.tab.c"
    break;

  case 119: /* relational_expression: LPAREN_TOK relational_expression RPAREN_TOK  */
#line 274 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2371 "y.tab.c"
    break;

  case 120: /* relational_expression: LPAREN_TOK data RPAREN_TOK  */
#line 275 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2377 "y.tab.c"
    break;

  case 134: /* declaration: datatype ID_TOK  */
#line 297 "./C_parser.y"
                                                {
							if(hashMapIsPresent(map,(yyvsp[0].idval)))
							{	
								fprintf(yyout,"Variable %s is already declared\n",(yyvsp[0].idval));
								exit(EXIT_FAILURE);
							}
							else
							{
								// printf("\n%s",type);
								// printf("\n%s",$2);
								hashMapInsert(map,scope,type,(yyvsp[0].idval));
								fprintf(yyout,"\nVariable %s of type %s with scope %d has been signified\n",(yyvsp[0].idval),type,scope);
							}
						}
#line 2396 "y.tab.c"
    break;

  case 163: /* datatype: INT_TOK  */
#line 351 "./C_parser.y"
                                                {strcpy(type,"int");}
#line 2402 "y.tab.c"
    break;

  case 164: /* datatype: FLOAT_TOK  */
#line 352 "./C_parser.y"
                                                          {strcpy(type,"float");}
#line 2408 "y.tab.c"
    break;

  case 165: /* datatype: DOUBLE_TOK  */
#line 353 "./C_parser.y"
                                                           {strcpy(type,"double");}
#line 2414 "y.tab.c"
    break;

  case 166: /* datatype: LONG_TOK  */
#line 354 "./C_parser.y"
                                                         {strcpy(type,"long");}
#line 2420 "y.tab.c"
    break;

  case 167: /* datatype: CHAR_TOK  */
#line 355 "./C_parser.y"
                                                         {strcpy(type,"char");}
#line 2426 "y.tab.c"
    break;

  case 168: /* datatype: SHORT_TOK  */
#line 356 "./C_parser.y"
                                                          {strcpy(type,"short");}
#line 2432 "y.tab.c"
    break;

  case 169: /* datatype: VOID_TOK  */
#line 357 "./C_parser.y"
                                                         {strcpy(type,"void");}
#line 2438 "y.tab.c"
    break;

  case 170: /* datatype: SIGNED_TOK INT_TOK  */
#line 358 "./C_parser.y"
                                                                   {strcpy(type,"signed int");}
#line 2444 "y.tab.c"
    break;

  case 171: /* datatype: UNSIGNED_TOK INT_TOK  */
#line 359 "./C_parser.y"
                                                                     {strcpy(type,"unsigned int");}
#line 2450 "y.tab.c"
    break;

  case 172: /* datatype: SIGNED_TOK CHAR_TOK  */
#line 360 "./C_parser.y"
                                                                    {strcpy(type,"signed char");}
#line 2456 "y.tab.c"
    break;

  case 173: /* datatype: UNSIGNED_TOK CHAR_TOK  */
#line 361 "./C_parser.y"
                                                                      {strcpy(type,"unsigned char");}
#line 2462 "y.tab.c"
    break;

  case 174: /* datatype: SIGNED_TOK SHORT_TOK  */
#line 362 "./C_parser.y"
                                                                     {strcpy(type,"signed short");}
#line 2468 "y.tab.c"
    break;

  case 175: /* datatype: UNSIGNED_TOK SHORT_TOK  */
#line 363 "./C_parser.y"
                                                                       {strcpy(type,"unsigned short");}
#line 2474 "y.tab.c"
    break;

  case 176: /* datatype: SIGNED_TOK LONG_TOK  */
#line 364 "./C_parser.y"
                                                                    {strcpy(type,"signed long");}
#line 2480 "y.tab.c"
    break;

  case 177: /* datatype: UNSIGNED_TOK LONG_TOK  */
#line 365 "./C_parser.y"
                                                                      {strcpy(type,"unsigned long");}
#line 2486 "y.tab.c"
    break;


#line 2490 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 430 "./C_parser.y"


void yyerror(char* yyErrorText)
{
	printf("\nyyerror: %s\n",yyErrorText);
}

int main(int argc,char* argv[])
{
	yylineno=0;
	if(argc!=3)
	{
		fprintf(stderr,"Usage:- %s <input_source_code_file> <result_file>\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	yyin=fopen(argv[1],"r");
	yyout=fopen(argv[2],"w");
	if(yyin==NULL||yyout==NULL)
	{
		fprintf(stderr,"fopen() error\n");
		exit(EXIT_FAILURE);
	}

	map=createHashMap();

	if(yyparse()==0)
	{
		fprintf(yyout,"\nProgram successfully parsed!!!\n");
	}
	else
	{
		fprintf(yyout,"Parsing error at line number %d\n",yylineno);
	}
	return 0;
}


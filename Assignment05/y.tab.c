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
  YYSYMBOL_func_block = 101,               /* func_block  */
  YYSYMBOL_102_7 = 102,                    /* $@7  */
  YYSYMBOL_103_8 = 103,                    /* $@8  */
  YYSYMBOL_104_9 = 104,                    /* $@9  */
  YYSYMBOL_block = 105,                    /* block  */
  YYSYMBOL_106_10 = 106,                   /* $@10  */
  YYSYMBOL_statements = 107,               /* statements  */
  YYSYMBOL_func_call = 108,                /* func_call  */
  YYSYMBOL_109_11 = 109,                   /* $@11  */
  YYSYMBOL_switch_statement = 110,         /* switch_statement  */
  YYSYMBOL_case_statements = 111,          /* case_statements  */
  YYSYMBOL_case_statement = 112,           /* case_statement  */
  YYSYMBOL_block_statements = 113,         /* block_statements  */
  YYSYMBOL_iterative_statement = 114,      /* iterative_statement  */
  YYSYMBOL_conditional_statement = 115,    /* conditional_statement  */
  YYSYMBOL_conditional_expression = 116,   /* conditional_expression  */
  YYSYMBOL_ternary_expression = 117,       /* ternary_expression  */
  YYSYMBOL_statement = 118,                /* statement  */
  YYSYMBOL_param = 119,                    /* param  */
  YYSYMBOL_params = 120,                   /* params  */
  YYSYMBOL_expression = 121,               /* expression  */
  YYSYMBOL_logical_expression = 122,       /* logical_expression  */
  YYSYMBOL_arithmetic_expression = 123,    /* arithmetic_expression  */
  YYSYMBOL_relational_expression = 124,    /* relational_expression  */
  YYSYMBOL_data_t = 125,                   /* data_t  */
  YYSYMBOL_data = 126,                     /* data  */
  YYSYMBOL_declarations = 127,             /* declarations  */
  YYSYMBOL_declaration = 128,              /* declaration  */
  YYSYMBOL_array_data = 129,               /* array_data  */
  YYSYMBOL_brackets = 130,                 /* brackets  */
  YYSYMBOL_bracket = 131,                  /* bracket  */
  YYSYMBOL_initializations = 132,          /* initializations  */
  YYSYMBOL_initialization = 133,           /* initialization  */
  YYSYMBOL_datatype = 134,                 /* datatype  */
  YYSYMBOL_storage_class = 135,            /* storage_class  */
  YYSYMBOL_qualifier = 136,                /* qualifier  */
  YYSYMBOL_num_operator = 137,             /* num_operator  */
  YYSYMBOL_relational_operator = 138,      /* relational_operator  */
  YYSYMBOL_logical_operator = 139,         /* logical_operator  */
  YYSYMBOL_assignment_operator = 140,      /* assignment_operator  */
  YYSYMBOL_number_literal = 141,           /* number_literal  */
  YYSYMBOL_other_literal = 142             /* other_literal  */
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
#define YYLAST   1279

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  405

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
     145,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   155,   155,   162,   162,   169,   169,   176,
     185,   185,   191,   194,   195,   196,   197,   198,   199,   202,
     202,   205,   216,   217,   220,   221,   222,   223,   226,   227,
     228,   229,   230,   231,   234,   239,   243,   249,   252,   256,
     262,   263,   264,   265,   266,   269,   272,   273,   274,   275,
     276,   277,   278,   281,   282,   283,   284,   285,   286,   289,
     290,   291,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   307,   308,   309,   310,   311,   314,   315,
     316,   320,   321,   322,   325,   326,   328,   329,   337,   338,
     341,   342,   345,   346,   347,   348,   349,   350,   360,   361,
     362,   363,   364,   365,   368,   371,   372,   375,   376,   377,
     380,   381,   382,   385,   386,   387,   388,   389,   397,   405,
     413,   421,   429,   437,   445,   453,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   474,   475,   476,   477,   480,   481,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   498,   499,
     500,   501,   502,   503,   506,   507,   510,   511,   512,   513,
     514,   515,   516,   517,   518,   526,   527,   528,   531,   532
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
  "function", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "func_block",
  "$@7", "$@8", "$@9", "block", "$@10", "statements", "func_call", "$@11",
  "switch_statement", "case_statements", "case_statement",
  "block_statements", "iterative_statement", "conditional_statement",
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

#define YYPACT_NINF (-175)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-137)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     654,  -175,   -14,   853,    -4,    -2,  -175,  -175,  -175,  -175,
    -175,  -175,    14,   304,    35,    80,  -175,   321,  -175,    85,
    -175,    73,  -175,  -175,  -175,  -175,    91,   123,  -175,  -175,
     654,   654,   654,   105,   447,   108,   124,    94,  1200,   175,
    -175,     9,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,   145,   269,  -175,  -175,   151,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,    10,
     148,   155,   170,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     729,    18,   175,   280,  -175,   698,  -175,   262,   190,  -175,
      40,    -7,   175,     4,  -175,   202,   205,  -175,   297,   507,
     203,   217,  -175,  -175,  -175,   233,  -175,   177,  -175,  1232,
     235,  -175,   237,  1232,  -175,   729,   225,   242,   251,   279,
     729,   145,   244,     7,   297,  -175,  1232,  1232,   660,  -175,
    -175,  -175,  -175,   300,   264,  -175,   255,    78,   309,   284,
    -175,  -175,  -175,   297,  -175,   864,     2,   291,   143,   906,
     515,  -175,   186,  -175,  -175,   540,  -175,  -175,   295,   297,
     518,   518,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,  -175,
     297,   297,   297,   164,   164,   164,   290,   292,   293,   311,
    -175,   729,   729,   317,   145,   145,   948,   557,   557,  -175,
    -175,   145,  -175,   145,  -175,  -175,  -175,   990,  1232,  -175,
    -175,  -175,  -175,   526,    17,   324,   325,   330,   248,   557,
    -175,   337,   327,  1195,  1232,   186,   186,  1232,  1232,  1232,
    -175,  -175,  -175,   -12,   729,   225,   322,   338,   340,    86,
    1232,   328,   791,  -175,  -175,   332,   362,  -175,   660,  -175,
    -175,   363,   557,   557,   557,   557,  1232,   365,   369,   372,
     349,  -175,  -175,   378,  -175,   297,  -175,   364,  -175,  -175,
    -175,   354,   366,  -175,   377,  -175,   395,   557,    20,    20,
     397,   398,   405,   413,   297,   297,   297,   324,  -175,  1232,
    -175,   399,   404,  -175,  -175,  -175,   422,  -175,  -175,  -175,
      20,    20,    20,    20,  1032,  1074,  1116,  -175,  -175,   599,
     599,   599,  -175,  -175,  -175,  -175,  -175,  -175,  -175,   808,
     441,   442,   392,   443,   450,   599,   599,   375,   599,   599,
     599,   380,   455,   698,   434,  -175,   382,  -175,   297,   518,
    -175,  -175,   164,  -175,  -175,  -175,   445,  -175,   451,   470,
     599,   472,  1158,   136,   457,   473,   518,   483,   484,   518,
     392,   392,   485,  -175,   149,   167,  -175,   158,   424,  -175,
    -175,   698,   164,   481,   486,   167,   487,   348,   489,   491,
     599,  -175,  -175,  -175,  -175,  -175,   392,   599,   449,   599,
     599,   599,   599,   599,  -175,   453,   492,  -175,  -175,  -175,
    -175,  -175,   499,  -175,  -175
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    78,     0,   128,     0,     0,   156,   157,   158,   172,
     176,   161,     0,     0,     0,     0,   159,     0,   162,     0,
     173,     0,   177,   160,   174,   175,     0,     0,    79,    80,
       6,     5,     7,     0,   121,     0,   141,     0,     0,     0,
     126,     0,   204,   196,   197,   198,   199,   203,   201,   202,
     151,   152,   200,   155,   136,     0,   153,   154,     0,   164,
     168,   170,   166,    81,    82,   163,   167,   169,   165,     0,
       0,     0,     0,     1,     4,     2,     3,    76,   128,   120,
     121,     0,     0,     0,    77,   142,   171,   127,     0,   129,
       0,     0,     0,     0,   137,     0,     0,   135,     0,     0,
       0,   117,   205,   206,   207,     0,   147,     0,    95,   150,
      93,    92,    94,   110,   116,     0,     0,     0,     0,     0,
       0,   127,     0,     0,     0,   146,   145,   110,     0,   140,
      23,   134,    21,   125,     0,   130,     0,     0,   124,     0,
     131,   139,   138,     0,   117,     0,    93,    92,    94,     0,
       0,   105,    74,    70,    71,     0,   118,    49,     0,     0,
       0,     0,   188,   190,   178,   179,   182,   181,   183,   184,
     187,   180,   189,   191,   194,   195,   192,   185,   186,   193,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
      12,     0,     0,     0,   125,   124,     0,    91,    91,    31,
      29,   122,   133,   123,   132,    27,    25,     0,   102,   104,
     109,   112,   107,     0,     0,   117,     0,     0,     0,     0,
     114,     0,   115,     0,   110,    72,    73,    98,    97,    96,
     108,   111,   103,     0,    19,     0,     0,     0,     0,     0,
     102,     0,   117,   208,   209,    90,     0,    83,    87,    88,
      85,     0,    91,    91,    91,    91,   102,     0,     0,     0,
       0,   105,   106,     0,   119,     0,    14,     0,    20,     9,
      11,     0,     0,    17,     0,    84,     0,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,    75,
      13,     0,     0,    16,    86,    89,    33,    39,    24,    22,
       0,     0,     0,     0,     0,     0,     0,    15,    18,    63,
      63,    63,    32,    30,    28,    26,   101,   100,    99,   128,
       0,     0,     0,     0,     0,    63,    63,     0,    63,    63,
      63,     0,     0,     0,     0,    40,     0,    42,     0,     0,
      61,    62,     0,    60,    59,    58,     0,    38,     0,     0,
      63,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,     0,    41,     0,    67,    65,
      34,     0,     0,     0,     0,    53,     0,     0,     0,     0,
      48,    51,    52,    66,    68,    69,     0,    48,    57,    48,
      48,    48,    48,    48,    64,    56,     0,    46,    47,    45,
      44,    43,     0,    55,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -175,   274,   288,  -175,  -175,  -175,  -106,  -175,  -175,  -175,
    -175,  -175,  -175,  -175,   140,  -175,  -175,  -175,  -152,  -175,
     206,   -54,  -175,    44,   159,  -175,   603,   107,   260,   -95,
    -175,     0,   314,  -135,   -37,   -88,   -10,   -86,  -175,   -48,
     -13,   -31,    64,    -1,  -175,   454,  -174,   100,  -175,    60,
      42,   -45,   -44,   -29,  -175,  -175
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    27,   189,    28,    29,    30,   186,    31,   198,   197,
     255,   254,   253,   252,   298,   309,   310,   311,   336,   350,
     388,   325,   219,   326,   374,   375,   327,   328,   329,   107,
     108,   330,   245,   246,   109,   110,   111,   112,   221,   224,
      33,    34,    89,   131,    54,    35,    36,    81,    38,    82,
     180,   181,   182,    55,   114,   250
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,   106,    53,    80,   152,    83,   209,   113,    86,   266,
     146,   153,   148,   154,   193,   116,    40,    94,   267,    86,
     260,    79,    86,   249,   249,   296,    56,   -70,    57,   125,
      32,    32,    32,    86,   138,   127,   146,   195,   148,    95,
     117,   297,   -70,   -70,    58,   249,   126,   261,   121,    80,
     149,   155,    10,    97,   128,   146,    63,   148,   139,    96,
      39,   145,   216,   251,   217,   225,   226,    79,   184,   185,
     133,    22,   153,   153,   154,   154,   149,    10,   249,   249,
     249,   249,   184,   185,   187,   237,   238,   196,   147,   187,
      39,    39,    39,    86,   134,   149,    22,    90,    92,    83,
      37,    64,   218,   249,   184,   185,   207,   273,   203,    86,
     184,   185,   155,   155,   147,    69,   274,   280,   281,   282,
     283,    72,   223,    73,    87,   216,    77,   217,   268,    84,
      37,    37,    37,   147,    70,   230,   231,   232,    91,    93,
     361,   122,   295,   227,   228,   229,    85,   211,    88,   247,
     247,   136,    41,    10,   135,   183,   115,   140,    71,   348,
     187,   187,   376,   258,   259,   218,   248,   248,   -71,   183,
     371,   247,    22,   184,   185,   120,   160,   161,   118,   184,
     185,   100,   123,   -71,   -71,   119,   135,   140,   248,   160,
     161,   183,   137,   132,   144,   258,   259,   378,   160,   161,
     202,   204,   159,   187,   247,   247,   247,   247,   368,   369,
     141,   258,   259,   142,   102,   103,   104,   160,   161,    83,
     157,   248,   248,   248,   248,   384,   160,   161,   289,   247,
       6,     7,     8,   156,   394,    11,   158,    13,   372,   373,
     105,    53,    16,    17,   353,    18,   248,   304,   305,   306,
     257,   153,   212,   154,    23,   188,   191,   162,   222,   163,
     -70,   364,   -71,   190,   367,   130,   183,   200,   153,    41,
     154,   153,    98,   154,   194,   -70,   -70,   -71,   -71,   172,
     173,    99,   257,   124,   192,   201,   100,   206,   174,   175,
     176,   155,    99,   179,   354,   210,   233,   100,   257,   101,
     143,   352,   128,   199,    74,    75,    76,    41,   155,    99,
     101,   155,   205,   234,   100,   235,    41,   236,    53,   102,
     103,   104,   337,   239,   379,   220,   389,   144,   262,   209,
     102,   103,   104,   389,   211,   389,   389,   389,   389,   389,
     128,   264,    86,   270,   271,   105,   272,   102,   103,   104,
       6,     7,     8,   335,   277,    11,   105,    13,   275,    59,
     337,   337,    16,    17,    60,    18,   278,   279,   284,     1,
       2,    61,   285,   105,    23,   286,    65,   337,     3,   287,
     393,    66,   288,    62,   291,   290,   337,   393,    67,   393,
     393,   393,   393,   393,     4,     5,   292,   335,   293,   294,
      68,   300,   301,     6,     7,     8,     9,    10,    11,   302,
      13,    14,    15,     1,     2,    16,    17,   303,    18,   299,
     307,    19,     3,    20,   390,   308,    22,    23,   -37,    24,
     323,   390,    25,   390,   390,   390,   390,   390,     4,     5,
     312,   313,   314,   315,   333,   334,   338,     6,     7,     8,
       9,    10,    11,   339,    13,    14,    15,    42,   342,    16,
      17,   347,    18,   346,   349,    19,   355,    20,   351,     2,
      22,    23,   356,    24,   357,   359,    25,    78,   362,   363,
      43,    44,    45,    46,    47,    48,    49,   391,   365,   377,
     366,   370,   381,   386,   391,    52,   391,   391,   391,   391,
     391,   380,     6,     7,     8,     9,    10,    11,   383,    13,
     150,   387,   396,   403,    16,    17,   402,    18,   213,    99,
     404,   213,    20,   269,   100,    22,    23,   214,    24,   213,
      99,    25,   100,   263,   382,   100,     0,   151,   214,   129,
       0,     0,     0,   100,     0,   215,     0,     0,   144,   162,
       0,   163,     0,     0,     0,     0,   144,   102,   103,   104,
       0,     0,     0,     0,     0,   102,   103,   104,   102,   103,
     104,   172,   173,     0,   241,     0,   102,   103,   104,     2,
     174,   175,   176,   105,     0,   179,     0,   242,     0,     0,
       0,   105,     0,   395,   105,   397,   398,   399,   400,   401,
       0,     0,   105,     4,     5,     0,   243,   102,   103,   104,
     244,     0,     6,     7,     8,     9,    10,    11,     0,    13,
       1,     2,     0,     0,    16,    17,     0,    18,     0,   319,
       0,     0,    20,   105,     0,    22,    23,   385,    24,     0,
     392,    25,     0,     0,     0,     4,     5,   392,     0,   392,
     392,   392,   392,   392,     6,     7,     8,     9,    10,    11,
       0,    13,    14,    15,     0,   320,    16,    17,   321,    18,
      42,     0,    19,     0,    20,     1,     2,    22,    23,   322,
      24,   323,     0,    25,     3,   324,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,    47,    48,    49,
       4,     5,     0,     0,     0,     0,     0,     0,    52,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     0,
       2,    16,    17,     0,    18,     0,     0,    19,     3,    20,
       0,    21,    22,    23,     0,    24,     0,     0,    25,    26,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     0,
       0,     2,     0,     6,     7,     8,     9,    10,    11,    78,
      13,     0,     0,     0,     0,    16,    17,     0,    18,     0,
       0,     0,     0,    20,     0,     0,    22,    23,     0,    24,
       0,     0,    25,     0,     6,     7,     8,     9,    10,    11,
       0,    13,     0,     0,   276,     0,    16,    17,    41,    18,
       0,    42,     0,     0,    20,     0,     0,    22,    23,     0,
      24,   157,     0,    25,     0,    41,     0,     0,    42,     0,
       0,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,     0,     0,     0,     0,     0,     0,    50,    51,    52,
       0,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,    50,    51,    52,  -136,     0,     0,
      41,     0,     0,    42,     0,     0,     0,     0,   208,     0,
       0,     0,     0,   162,     0,   163,     0,   164,   165,   166,
     167,   168,   169,   170,     0,     0,    43,    44,    45,    46,
      47,    48,    49,   171,     0,   172,   173,     0,     0,    50,
      51,    52,     0,     0,   174,   175,   176,   177,   178,   179,
     212,     0,     0,   331,   332,   162,     0,   163,     0,   164,
     165,   166,   167,   168,   169,   170,     0,     0,   340,   341,
       0,   343,   344,   345,     0,   171,     0,   172,   173,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   177,
     178,   179,   240,   358,     0,     0,     0,   162,     0,   163,
       0,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,   177,   178,   179,   256,     0,     0,     0,     0,   162,
       0,   163,     0,   164,   165,   166,   167,   168,   169,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
       0,   172,   173,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   176,   177,   178,   179,   316,     0,     0,     0,
       0,   162,     0,   163,     0,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,     0,   172,   173,     0,     0,     0,     0,     0,
       0,     0,   174,   175,   176,   177,   178,   179,   317,     0,
       0,     0,     0,   162,     0,   163,     0,   164,   165,   166,
     167,   168,   169,   170,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,   172,   173,     0,     0,     0,
       0,     0,     0,     0,   174,   175,   176,   177,   178,   179,
     318,     0,     0,     0,     0,   162,     0,   163,     0,   164,
     165,   166,   167,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,     0,   172,   173,     0,
       0,     0,     0,     0,     0,     0,   174,   175,   176,   177,
     178,   179,   360,     0,     0,     0,     0,   162,     0,   163,
       0,   164,   165,   166,   167,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,   172,
     173,     0,     0,     0,     0,     0,     0,     0,   174,   175,
     176,   177,   178,   179,   162,     0,   163,     0,   164,   165,
     166,   167,   168,   169,   170,   265,     0,     0,     0,     0,
       0,     0,     0,     0,   171,     0,   172,   173,     0,     0,
       0,     0,     0,     0,     0,   174,   175,   176,   177,   178,
     179,   162,     0,   163,     0,   164,   165,   166,   167,   168,
     169,   170,     0,     0,     0,     6,     7,     8,     0,    10,
      11,   171,    13,   172,   173,     0,     0,    16,    17,     0,
      18,     0,   174,   175,   176,   177,   178,   179,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,    55,     3,    34,    99,    34,     4,    55,    15,    21,
      98,    99,    98,    99,   120,     5,    30,     8,    30,    15,
       3,    34,    15,   197,   198,     5,    30,    25,    30,    83,
      30,    31,    32,    15,    30,    83,   124,    30,   124,    30,
      30,    21,    40,    41,    30,   219,    83,    30,    30,    80,
      98,    99,    59,    54,    85,   143,    21,   143,    54,    50,
       0,    98,   150,   198,   150,   160,   161,    80,   113,   113,
      30,    78,   160,   161,   160,   161,   124,    59,   252,   253,
     254,   255,   127,   127,   115,   191,   192,   124,    98,   120,
      30,    31,    32,    15,    54,   143,    78,    37,    38,   128,
       0,    21,   150,   277,   149,   149,   143,    21,    30,    15,
     155,   155,   160,   161,   124,    30,    30,   252,   253,   254,
     255,    30,   159,     0,    30,   213,    21,   213,   234,    21,
      30,    31,    32,   143,    61,   183,   184,   185,    38,    39,
       4,    81,   277,   180,   181,   182,    22,     4,    54,   197,
     198,    91,     7,    59,    90,   113,     5,    93,    85,   333,
     191,   192,     4,   208,   208,   213,   197,   198,    25,   127,
      21,   219,    78,   218,   218,     5,    40,    41,    30,   224,
     224,    17,    82,    40,    41,    30,   122,   123,   219,    40,
      41,   149,    92,     3,    30,   240,   240,   371,    40,    41,
     136,   137,    25,   234,   252,   253,   254,   255,   360,   361,
       8,   256,   256,     8,    50,    51,    52,    40,    41,   248,
       3,   252,   253,   254,   255,   377,    40,    41,   265,   277,
      55,    56,    57,    30,   386,    60,     3,    62,    71,    72,
      76,   242,    67,    68,   339,    70,   277,   284,   285,   286,
     208,   339,     4,   339,    79,    30,     5,     9,   158,    11,
      25,   356,    25,    21,   359,     3,   224,     3,   356,     7,
     356,   359,     3,   359,    30,    40,    41,    40,    41,    31,
      32,    12,   240,     3,     5,    30,    17,     3,    40,    41,
      42,   339,    12,    45,   342,     4,     6,    17,   256,    30,
       3,   338,   333,     3,    30,    31,    32,     7,   356,    12,
      30,   359,     3,    21,    17,    22,     7,     6,   319,    50,
      51,    52,   322,     6,   372,    30,   380,    30,     4,     4,
      50,    51,    52,   387,     4,   389,   390,   391,   392,   393,
     371,     4,    15,    21,     6,    76,     6,    50,    51,    52,
      55,    56,    57,     5,    22,    60,    76,    62,    30,    55,
     360,   361,    67,    68,    60,    70,     4,     4,     3,    21,
      22,    67,     3,    76,    79,     3,    55,   377,    30,    30,
     380,    60,     4,    79,    30,    21,   386,   387,    67,   389,
     390,   391,   392,   393,    46,    47,    30,     5,    21,     4,
      79,     4,     4,    55,    56,    57,    58,    59,    60,     4,
      62,    63,    64,    21,    22,    67,    68,     4,    70,   279,
      21,    73,    30,    75,   380,    21,    78,    79,     6,    81,
      82,   387,    84,   389,   390,   391,   392,   393,    46,    47,
     300,   301,   302,   303,     3,     3,     3,    55,    56,    57,
      58,    59,    60,     3,    62,    63,    64,    10,    83,    67,
      68,     6,    70,    83,    30,    73,    21,    75,    86,    22,
      78,    79,    21,    81,     4,     3,    84,    30,    21,     6,
      33,    34,    35,    36,    37,    38,    39,   380,     5,    65,
       6,     6,     6,     4,   387,    48,   389,   390,   391,   392,
     393,    20,    55,    56,    57,    58,    59,    60,    21,    62,
       3,    20,    63,    21,    67,    68,    63,    70,     3,    12,
      21,     3,    75,   235,    17,    78,    79,    12,    81,     3,
      12,    84,    17,   219,   375,    17,    -1,    30,    12,    85,
      -1,    -1,    -1,    17,    -1,    30,    -1,    -1,    30,     9,
      -1,    11,    -1,    -1,    -1,    -1,    30,    50,    51,    52,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    50,    51,
      52,    31,    32,    -1,    17,    -1,    50,    51,    52,    22,
      40,    41,    42,    76,    -1,    45,    -1,    30,    -1,    -1,
      -1,    76,    -1,   387,    76,   389,   390,   391,   392,   393,
      -1,    -1,    76,    46,    47,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    62,
      21,    22,    -1,    -1,    67,    68,    -1,    70,    -1,    30,
      -1,    -1,    75,    76,    -1,    78,    79,   377,    81,    -1,
     380,    84,    -1,    -1,    -1,    46,    47,   387,    -1,   389,
     390,   391,   392,   393,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    68,    69,    70,
      10,    -1,    73,    -1,    75,    21,    22,    78,    79,    80,
      81,    82,    -1,    84,    30,    86,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    48,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      22,    67,    68,    -1,    70,    -1,    -1,    73,    30,    75,
      -1,    77,    78,    79,    -1,    81,    -1,    -1,    84,    85,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    55,    56,    57,    58,    59,    60,    30,
      62,    -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,
      -1,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,    81,
      -1,    -1,    84,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    -1,    -1,     3,    -1,    67,    68,     7,    70,
      -1,    10,    -1,    -1,    75,    -1,    -1,    78,    79,    -1,
      81,     3,    -1,    84,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    48,
      -1,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    48,     4,    -1,    -1,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    29,    -1,    31,    32,    -1,    -1,    46,
      47,    48,    -1,    -1,    40,    41,    42,    43,    44,    45,
       4,    -1,    -1,   310,   311,     9,    -1,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,   325,   326,
      -1,   328,   329,   330,    -1,    29,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,     4,   350,    -1,    -1,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,     4,    -1,    -1,    -1,    -1,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,     4,    -1,    -1,    -1,
      -1,     9,    -1,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,     4,    -1,
      -1,    -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
       4,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,     4,    -1,    -1,    -1,    -1,     9,    -1,    11,
      -1,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,     9,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
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
      92,    94,   118,   127,   128,   132,   133,   134,   135,   136,
      30,     7,    10,    33,    34,    35,    36,    37,    38,    39,
      46,    47,    48,   130,   131,   140,    30,    30,    30,    55,
      60,    67,    79,    21,    21,    55,    60,    67,    79,    30,
      61,    85,    30,     0,    88,    88,    88,    21,    30,   127,
     128,   134,   136,   140,    21,    22,    15,    30,    54,   129,
     136,   134,   136,   134,     8,    30,    50,   130,     3,    12,
      17,    30,    50,    51,    52,    76,   108,   116,   117,   121,
     122,   123,   124,   126,   141,     5,     5,    30,    30,    30,
       5,    30,   136,   134,     3,   108,   121,   126,   128,   132,
       3,   130,     3,    30,    54,   129,   136,   134,    30,    54,
     129,     8,     8,     3,    30,   121,   122,   123,   124,   126,
       3,    30,   116,   122,   124,   126,    30,     3,     3,    25,
      40,    41,     9,    11,    13,    14,    15,    16,    17,    18,
      19,    29,    31,    32,    40,    41,    42,    43,    44,    45,
     137,   138,   139,   137,   138,   139,    93,   128,    30,    89,
      21,     5,     5,    93,    30,    30,   121,    96,    95,     3,
       3,    30,   129,    30,   129,     3,     3,   121,     4,     4,
       4,     4,     4,     3,    12,    30,   122,   124,   126,   109,
      30,   125,   134,   121,   126,   116,   116,   121,   121,   121,
     126,   126,   126,     6,    21,    22,     6,    93,    93,     6,
       4,    17,    30,    49,    53,   119,   120,   126,   128,   133,
     142,   120,   100,    99,    98,    97,     4,   137,   138,   139,
       3,    30,     4,   119,     4,    20,    21,    30,    93,    89,
      21,     6,     6,    21,    30,    30,     3,    22,     4,     4,
     120,   120,   120,   120,     3,     3,     3,    30,     4,   121,
      21,    30,    30,    21,     4,   120,     5,    21,   101,   101,
       4,     4,     4,     4,   121,   121,   121,    21,    21,   102,
     103,   104,   101,   101,   101,   101,     4,     4,     4,    30,
      66,    69,    80,    82,    86,   108,   110,   113,   114,   115,
     118,   113,   113,     3,     3,     5,   105,   118,     3,     3,
     113,   113,    83,   113,   113,   113,    83,     6,   133,    30,
     106,    86,   121,   116,   126,    21,    21,     4,   113,     3,
       4,     4,    21,     6,   116,     5,     6,   116,   105,   105,
       6,    21,    71,    72,   111,   112,     4,    65,   133,   126,
      20,     6,   111,    21,   105,   115,     4,    20,   107,   108,
     110,   114,   115,   118,   105,   107,    63,   107,   107,   107,
     107,   107,    63,    21,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    95,    94,    96,    94,    97,    94,    98,    94,    99,
      94,   100,    94,   102,   101,   103,   101,   104,   101,   101,
     106,   105,   105,   107,   107,   107,   107,   107,   107,   109,
     108,   110,   111,   111,   112,   112,   112,   112,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   115,   115,   115,
     116,   116,   116,   116,   116,   117,   118,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   119,   119,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   122,   122,   122,   122,   122,   123,   123,
     123,   124,   124,   124,   125,   125,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   130,   130,   131,   131,   131,
     132,   132,   132,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   138,   138,
     138,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     0,     3,
       1,     6,     4,     7,     6,     8,     7,     6,     8,     2,
       3,     0,     7,     0,     7,     0,     8,     0,     8,     0,
       8,     0,     8,     0,     7,     0,     6,     0,     4,     1,
       0,     4,     1,     2,     2,     2,     2,     2,     0,     0,
       5,     7,     2,     1,     6,     5,     4,     3,     2,     2,
       2,     2,     2,     0,     9,     5,     7,     5,     7,     7,
       1,     1,     3,     3,     2,     5,     2,     2,     1,     1,
       1,     2,     2,     1,     2,     1,     3,     1,     1,     3,
       1,     0,     1,     1,     1,     1,     3,     3,     3,     7,
       7,     7,     3,     3,     3,     2,     4,     3,     3,     3,
       1,     3,     3,     3,     1,     1,     1,     1,     2,     4,
       2,     1,     4,     4,     3,     3,     2,     2,     1,     2,
       3,     3,     4,     4,     2,     2,     0,     2,     3,     3,
       3,     1,     0,     3,     5,     3,     3,     3,     3,     5,
       3,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 1911 "y.tab.c"
    break;

  case 12: /* enum_init: ENUM_TOK ID_TOK ID_TOK SEMI_COLON_TOK  */
#line 133 "./C_parser.y"
                                                                              {fprintf(yyout,"\nParsed an enum initialisation at line no:- %d\n",yylineno);}
#line 1917 "y.tab.c"
    break;

  case 13: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 136 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1923 "y.tab.c"
    break;

  case 14: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 137 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1929 "y.tab.c"
    break;

  case 15: /* structure: TYPEDEF_TOK STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 138 "./C_parser.y"
                                                                                                                                      {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1935 "y.tab.c"
    break;

  case 16: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 139 "./C_parser.y"
                                                                                                                         {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1941 "y.tab.c"
    break;

  case 17: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 140 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1947 "y.tab.c"
    break;

  case 18: /* structure: TYPEDEF_TOK UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 141 "./C_parser.y"
                                                                                                                                     {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1953 "y.tab.c"
    break;

  case 21: /* $@1: %empty  */
#line 147 "./C_parser.y"
                                                                          {scope++;}
#line 1959 "y.tab.c"
    break;

  case 22: /* function: datatype MAIN_FUNC_TOK LPAREN_TOK $@1 params RPAREN_TOK func_block  */
#line 147 "./C_parser.y"
                                                                                                                 {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1965 "y.tab.c"
    break;

  case 23: /* $@2: %empty  */
#line 148 "./C_parser.y"
                                                                           {scope++;}
#line 1971 "y.tab.c"
    break;

  case 24: /* function: datatype ID_TOK LPAREN_TOK $@2 params RPAREN_TOK func_block  */
#line 148 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1977 "y.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 149 "./C_parser.y"
                                                                                            {scope++;}
#line 1983 "y.tab.c"
    break;

  case 26: /* function: qualifier datatype MAIN_FUNC_TOK LPAREN_TOK $@3 params RPAREN_TOK func_block  */
#line 149 "./C_parser.y"
                                                                                                                                   {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1989 "y.tab.c"
    break;

  case 27: /* $@4: %empty  */
#line 150 "./C_parser.y"
                                                                                     {scope++;}
#line 1995 "y.tab.c"
    break;

  case 28: /* function: qualifier datatype ID_TOK LPAREN_TOK $@4 params RPAREN_TOK func_block  */
#line 150 "./C_parser.y"
                                                                                                                            {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2001 "y.tab.c"
    break;

  case 29: /* $@5: %empty  */
#line 151 "./C_parser.y"
                                                                                            {scope++;}
#line 2007 "y.tab.c"
    break;

  case 30: /* function: datatype qualifier MAIN_FUNC_TOK LPAREN_TOK $@5 params RPAREN_TOK func_block  */
#line 151 "./C_parser.y"
                                                                                                                                   {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2013 "y.tab.c"
    break;

  case 31: /* $@6: %empty  */
#line 152 "./C_parser.y"
                                                                                     {scope++;}
#line 2019 "y.tab.c"
    break;

  case 32: /* function: datatype qualifier ID_TOK LPAREN_TOK $@6 params RPAREN_TOK func_block  */
#line 152 "./C_parser.y"
                                                                                                                            {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2025 "y.tab.c"
    break;

  case 33: /* $@7: %empty  */
#line 155 "./C_parser.y"
                                     { 
                            scope++; 
                        }
#line 2033 "y.tab.c"
    break;

  case 34: /* func_block: LCURLY_TOK $@7 block_statements RETURN_TOK data SEMI_COLON_TOK RCURLY_TOK  */
#line 157 "./C_parser.y"
                                                                                     {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed a function block with return at line no: %d\n",yylineno);
                        }
#line 2043 "y.tab.c"
    break;

  case 35: /* $@8: %empty  */
#line 162 "./C_parser.y"
                                    {
                            scope++;
                        }
#line 2051 "y.tab.c"
    break;

  case 36: /* func_block: LCURLY_TOK $@8 block_statements RETURN_TOK SEMI_COLON_TOK RCURLY_TOK  */
#line 164 "./C_parser.y"
                                                                                {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed a void function block at line no: %d\n",yylineno);
                        }
#line 2061 "y.tab.c"
    break;

  case 37: /* $@9: %empty  */
#line 169 "./C_parser.y"
                                    {
                            scope++;
                        }
#line 2069 "y.tab.c"
    break;

  case 38: /* func_block: LCURLY_TOK $@9 block_statements RCURLY_TOK  */
#line 171 "./C_parser.y"
                                                      {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed an empty function block at line no: %d\n",yylineno);
                        }
#line 2079 "y.tab.c"
    break;

  case 40: /* $@10: %empty  */
#line 185 "./C_parser.y"
                                    {
                            scope++;
                        }
#line 2087 "y.tab.c"
    break;

  case 41: /* block: LCURLY_TOK $@10 block_statements RCURLY_TOK  */
#line 187 "./C_parser.y"
                                                      {
                            hashMapRemoveScope(map, scope);
                            scope--;
                        }
#line 2096 "y.tab.c"
    break;

  case 49: /* $@11: %empty  */
#line 202 "./C_parser.y"
                                                          {scope++;}
#line 2102 "y.tab.c"
    break;

  case 50: /* func_call: ID_TOK LPAREN_TOK $@11 param RPAREN_TOK  */
#line 202 "./C_parser.y"
                                                                                     {hashMapRemoveScope(map,scope);scope--;}
#line 2108 "y.tab.c"
    break;

  case 51: /* switch_statement: SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_statements RCURLY_TOK  */
#line 206 "./C_parser.y"
                                                 {
							if(!hashMapIsPresent(map,(yyvsp[-4].idval)))
							{
								fprintf(yyout,"\n Variable %s is not declared \n",(yyvsp[-4].idval));
								exit(EXIT_FAILURE);
							}
							fprintf(yyout,"\nParsed a switch block at line no:- %d\n",yylineno);
						 }
#line 2121 "y.tab.c"
    break;

  case 54: /* case_statement: CASE_TOK data COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 220 "./C_parser.y"
                                                                                             {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2127 "y.tab.c"
    break;

  case 55: /* case_statement: DEFAULT_TOK COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 221 "./C_parser.y"
                                                                                                           {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2133 "y.tab.c"
    break;

  case 56: /* case_statement: CASE_TOK data COLON_TOK statements  */
#line 222 "./C_parser.y"
                                                                                    {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2139 "y.tab.c"
    break;

  case 57: /* case_statement: DEFAULT_TOK COLON_TOK statements  */
#line 223 "./C_parser.y"
                                                                                  {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2145 "y.tab.c"
    break;

  case 64: /* iterative_statement: FOR_TOK LPAREN_TOK initialization SEMI_COLON_TOK conditional_expression SEMI_COLON_TOK initialization RPAREN_TOK block  */
#line 236 "./C_parser.y"
                                          {
                            fprintf(yyout,"\nParsed a for loop at line no: %d\n",yylineno);
                        }
#line 2153 "y.tab.c"
    break;

  case 65: /* iterative_statement: WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK block  */
#line 240 "./C_parser.y"
                               {
                            fprintf(yyout,"\nParsed a while loop at line no: %d\n",yylineno);
                        }
#line 2161 "y.tab.c"
    break;

  case 66: /* iterative_statement: DO_TOK block WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK SEMI_COLON_TOK  */
#line 244 "./C_parser.y"
                                                   {
                            fprintf(yyout,"\nParsed a do-while loop at line no: %d\n",yylineno);
                        }
#line 2169 "y.tab.c"
    break;

  case 67: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block  */
#line 249 "./C_parser.y"
                                                                       {
                            fprintf(yyout,"\nParsed an if statement at line no: %d\n",yylineno);
                        }
#line 2177 "y.tab.c"
    break;

  case 68: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK block  */
#line 253 "./C_parser.y"
                                        {
                            fprintf(yyout,"\nParsed an if-else statement at line no: %d\n",yylineno);
                        }
#line 2185 "y.tab.c"
    break;

  case 69: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK conditional_statement  */
#line 257 "./C_parser.y"
                                                        {
                            fprintf(yyout,"\nParsed an else-if statement at line no: %d\n",yylineno);
                        }
#line 2193 "y.tab.c"
    break;

  case 75: /* ternary_expression: conditional_expression QUESTION_MARK_TOK expression COLON_TOK expression  */
#line 269 "./C_parser.y"
                                                                                                          {fprintf(yyout,"\nParsed a ternary expression at line no:- %d\n",yylineno);}
#line 2199 "y.tab.c"
    break;

  case 103: /* logical_expression: data logical_operator data  */
#line 307 "./C_parser.y"
                                                            {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2205 "y.tab.c"
    break;

  case 104: /* logical_expression: LPAREN_TOK logical_expression RPAREN_TOK  */
#line 308 "./C_parser.y"
                                                                                         {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2211 "y.tab.c"
    break;

  case 105: /* logical_expression: NOT_TOK ID_TOK  */
#line 309 "./C_parser.y"
                                                               {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2217 "y.tab.c"
    break;

  case 106: /* logical_expression: NOT_TOK LPAREN_TOK ID_TOK RPAREN_TOK  */
#line 310 "./C_parser.y"
                                                                                     {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2223 "y.tab.c"
    break;

  case 107: /* logical_expression: LPAREN_TOK data RPAREN_TOK  */
#line 311 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2229 "y.tab.c"
    break;

  case 108: /* arithmetic_expression: data num_operator data  */
#line 314 "./C_parser.y"
                                               {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2235 "y.tab.c"
    break;

  case 109: /* arithmetic_expression: LPAREN_TOK arithmetic_expression RPAREN_TOK  */
#line 315 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2241 "y.tab.c"
    break;

  case 110: /* arithmetic_expression: data  */
#line 316 "./C_parser.y"
                                                     {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2247 "y.tab.c"
    break;

  case 111: /* relational_expression: data relational_operator data  */
#line 320 "./C_parser.y"
                                                      {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2253 "y.tab.c"
    break;

  case 112: /* relational_expression: LPAREN_TOK relational_expression RPAREN_TOK  */
#line 321 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2259 "y.tab.c"
    break;

  case 113: /* relational_expression: LPAREN_TOK data RPAREN_TOK  */
#line 322 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2265 "y.tab.c"
    break;

  case 117: /* data: ID_TOK  */
#line 330 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[0].idval)))
							{
								fprintf(yyout,"%s is not declared in scope\n",(yyvsp[0].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2277 "y.tab.c"
    break;

  case 127: /* declaration: datatype ID_TOK  */
#line 350 "./C_parser.y"
                                         {
                            if(hashMapIsPresent(map, (yyvsp[0].idval))) {
                                fprintf(yyout,"Variable %s is already declared\n", (yyvsp[0].idval));
                                exit(EXIT_FAILURE);
                            } else {
                                hashMapInsert(map, scope, type, (yyvsp[0].idval));
                                fprintf(yyout,"\nVariable %s of type %s with scope %d has been declared\n",
                                        (yyvsp[0].idval), type, scope);
                            }
                        }
#line 2292 "y.tab.c"
    break;

  case 147: /* initialization: ID_TOK assignment_operator func_call  */
#line 390 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-2].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-2].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2304 "y.tab.c"
    break;

  case 148: /* initialization: ID_TOK assignment_operator data  */
#line 398 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-2].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-2].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2316 "y.tab.c"
    break;

  case 149: /* initialization: ID_TOK assignment_operator LPAREN_TOK expression RPAREN_TOK  */
#line 406 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-4].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-4].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2328 "y.tab.c"
    break;

  case 150: /* initialization: ID_TOK assignment_operator expression  */
#line 414 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-2].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-2].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2340 "y.tab.c"
    break;

  case 151: /* initialization: ID_TOK PLUS_PLUS_TOK  */
#line 422 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-1].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-1].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2352 "y.tab.c"
    break;

  case 152: /* initialization: ID_TOK MINUS_MINUS_TOK  */
#line 430 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[-1].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[-1].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2364 "y.tab.c"
    break;

  case 153: /* initialization: PLUS_PLUS_TOK ID_TOK  */
#line 438 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[0].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[0].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2376 "y.tab.c"
    break;

  case 154: /* initialization: MINUS_MINUS_TOK ID_TOK  */
#line 446 "./C_parser.y"
                                                {
							if(!hashMapIsPresent(map,(yyvsp[0].idval)))
							{
								fprintf(yyout,"Variable %s is not declared\n",(yyvsp[0].idval));
								exit(EXIT_FAILURE);
							}
						}
#line 2388 "y.tab.c"
    break;

  case 156: /* datatype: INT_TOK  */
#line 456 "./C_parser.y"
                                                {strcpy(type,"int");}
#line 2394 "y.tab.c"
    break;

  case 157: /* datatype: FLOAT_TOK  */
#line 457 "./C_parser.y"
                                                          {strcpy(type,"float");}
#line 2400 "y.tab.c"
    break;

  case 158: /* datatype: DOUBLE_TOK  */
#line 458 "./C_parser.y"
                                                           {strcpy(type,"double");}
#line 2406 "y.tab.c"
    break;

  case 159: /* datatype: LONG_TOK  */
#line 459 "./C_parser.y"
                                                         {strcpy(type,"long");}
#line 2412 "y.tab.c"
    break;

  case 160: /* datatype: CHAR_TOK  */
#line 460 "./C_parser.y"
                                                         {strcpy(type,"char");}
#line 2418 "y.tab.c"
    break;

  case 161: /* datatype: SHORT_TOK  */
#line 461 "./C_parser.y"
                                                          {strcpy(type,"short");}
#line 2424 "y.tab.c"
    break;

  case 162: /* datatype: VOID_TOK  */
#line 462 "./C_parser.y"
                                                         {strcpy(type,"void");}
#line 2430 "y.tab.c"
    break;

  case 163: /* datatype: SIGNED_TOK INT_TOK  */
#line 463 "./C_parser.y"
                                                                   {strcpy(type,"signed int");}
#line 2436 "y.tab.c"
    break;

  case 164: /* datatype: UNSIGNED_TOK INT_TOK  */
#line 464 "./C_parser.y"
                                                                     {strcpy(type,"unsigned int");}
#line 2442 "y.tab.c"
    break;

  case 165: /* datatype: SIGNED_TOK CHAR_TOK  */
#line 465 "./C_parser.y"
                                                                    {strcpy(type,"signed char");}
#line 2448 "y.tab.c"
    break;

  case 166: /* datatype: UNSIGNED_TOK CHAR_TOK  */
#line 466 "./C_parser.y"
                                                                      {strcpy(type,"unsigned char");}
#line 2454 "y.tab.c"
    break;

  case 167: /* datatype: SIGNED_TOK SHORT_TOK  */
#line 467 "./C_parser.y"
                                                                     {strcpy(type,"signed short");}
#line 2460 "y.tab.c"
    break;

  case 168: /* datatype: UNSIGNED_TOK SHORT_TOK  */
#line 468 "./C_parser.y"
                                                                       {strcpy(type,"unsigned short");}
#line 2466 "y.tab.c"
    break;

  case 169: /* datatype: SIGNED_TOK LONG_TOK  */
#line 469 "./C_parser.y"
                                                                    {strcpy(type,"signed long");}
#line 2472 "y.tab.c"
    break;

  case 170: /* datatype: UNSIGNED_TOK LONG_TOK  */
#line 470 "./C_parser.y"
                                                                      {strcpy(type,"unsigned long");}
#line 2478 "y.tab.c"
    break;


#line 2482 "y.tab.c"

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

#line 535 "./C_parser.y"


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


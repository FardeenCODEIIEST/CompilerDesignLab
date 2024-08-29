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
	#include "lex.yy.c"
	void yyerror(char*);

	typedef struct Symbol
	{
		char* var;
		struct Symbol* next;
	}Symbol;

	// Head of the symbol table
	Symbol *symbol_table=NULL;

	// Function to lookup a symbol in the symbol table
	int lookup(char* lex)
	{
		Symbol* curr=symbol_table;
		while(curr!=NULL)
		{
			if(strcmp(curr->var,lex)==0)
			{
				return 1; // found
			}
			curr=curr->next;
		}
		return 0; // not found
	}

	// Function to insert a symbol into the symbol table
	int insert(char* lex)
	{
		Symbol* curr=symbol_table;
		while(curr!=NULL)
		{
			if(strcmp(curr->var,lex)==0)
			{
				return 0;		// alreay declared
			}
			curr=curr->next;
		}

		Symbol* new_sym=(Symbol*)malloc(sizeof(Symbol));
		new_sym->var=strdup(lex);
		new_sym->next=symbol_table;
		symbol_table=new_sym;
		return 1; // not declared
	}


#line 123 "y.tab.c"

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

#line 363 "y.tab.c"

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
  YYSYMBOL_structure = 89,                 /* structure  */
  YYSYMBOL_struct_decl = 90,               /* struct_decl  */
  YYSYMBOL_function = 91,                  /* function  */
  YYSYMBOL_func_block = 92,                /* func_block  */
  YYSYMBOL_block = 93,                     /* block  */
  YYSYMBOL_statements = 94,                /* statements  */
  YYSYMBOL_func_call = 95,                 /* func_call  */
  YYSYMBOL_switch_statement = 96,          /* switch_statement  */
  YYSYMBOL_case_statements = 97,           /* case_statements  */
  YYSYMBOL_case_statement = 98,            /* case_statement  */
  YYSYMBOL_iterative_statement = 99,       /* iterative_statement  */
  YYSYMBOL_conditional_statement = 100,    /* conditional_statement  */
  YYSYMBOL_conditional_expression = 101,   /* conditional_expression  */
  YYSYMBOL_ternary_expression = 102,       /* ternary_expression  */
  YYSYMBOL_statement = 103,                /* statement  */
  YYSYMBOL_param = 104,                    /* param  */
  YYSYMBOL_params = 105,                   /* params  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_logical_expression = 107,       /* logical_expression  */
  YYSYMBOL_arithmetic_expression = 108,    /* arithmetic_expression  */
  YYSYMBOL_relational_expression = 109,    /* relational_expression  */
  YYSYMBOL_data_t = 110,                   /* data_t  */
  YYSYMBOL_data = 111,                     /* data  */
  YYSYMBOL_declarations = 112,             /* declarations  */
  YYSYMBOL_declaration = 113,              /* declaration  */
  YYSYMBOL_array_data = 114,               /* array_data  */
  YYSYMBOL_brackets = 115,                 /* brackets  */
  YYSYMBOL_bracket = 116,                  /* bracket  */
  YYSYMBOL_initializations = 117,          /* initializations  */
  YYSYMBOL_initialization = 118,           /* initialization  */
  YYSYMBOL_datatype = 119,                 /* datatype  */
  YYSYMBOL_storage_class = 120,            /* storage_class  */
  YYSYMBOL_qualifier = 121,                /* qualifier  */
  YYSYMBOL_num_operator = 122,             /* num_operator  */
  YYSYMBOL_relational_operator = 123,      /* relational_operator  */
  YYSYMBOL_logical_operator = 124,         /* logical_operator  */
  YYSYMBOL_assignment_operator = 125,      /* assignment_operator  */
  YYSYMBOL_number_literal = 126,           /* number_literal  */
  YYSYMBOL_other_literal = 127             /* other_literal  */
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
#define YYFINAL  69
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  188
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

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
       0,   157,   157,   158,   159,   160,   161,   162,   163,   166,
     167,   168,   169,   170,   171,   174,   175,   177,   178,   179,
     180,   181,   182,   185,   186,   187,   188,   189,   190,   197,
     198,   201,   202,   203,   204,   205,   206,   209,   212,   215,
     216,   219,   220,   221,   222,   225,   226,   227,   230,   231,
     232,   235,   236,   237,   238,   239,   242,   245,   246,   247,
     248,   249,   252,   253,   254,   255,   256,   257,   260,   261,
     262,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   278,   279,   280,   281,   282,   285,   286,   287,
     291,   292,   293,   296,   305,   307,   308,   317,   326,   329,
     330,   333,   346,   359,   372,   385,   398,   411,   420,   421,
     422,   423,   424,   427,   442,   443,   446,   447,   448,   451,
     452,   453,   456,   457,   458,   459,   460,   469,   478,   487,
     496,   505,   514,   523,   532,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   561,   562,   563,   564,   567,   568,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   585,   586,   587,
     588,   589,   590,   593,   594,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   609,   610,   611,   614,   615
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
  "structure", "struct_decl", "function", "func_block", "block",
  "statements", "func_call", "switch_statement", "case_statements",
  "case_statement", "iterative_statement", "conditional_statement",
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

#define YYPACT_NINF (-111)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-116)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     612,  -111,    -8,   818,    -5,    45,  -111,  -111,  -111,  -111,
    -111,  -111,    58,   231,    68,    75,  -111,   342,  -111,  -111,
     -55,  -111,  -111,  -111,  -111,    96,   134,   612,   612,   612,
     124,   348,   129,   136,    22,  1277,   839,  -111,    27,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,   163,   362,  -111,  -111,   166,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   158,   164,   181,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,   686,     1,   839,   416,
    -111,   655,  -111,    16,   193,  -111,    17,    23,   839,    88,
    -111,   194,   199,  -111,   419,   422,   179,   209,  -111,  -111,
    -111,   211,  -111,    83,  -111,  1271,   265,  -111,   274,  1271,
    -111,   686,   212,   217,   686,   163,   190,     6,   419,  -111,
    1271,  1271,   618,  -111,   515,  -111,   515,    99,   222,  -111,
     198,   101,   169,   237,  -111,  -111,  -111,   419,  -111,   829,
     175,   249,   241,   871,   472,  -111,   -12,  -111,  -111,  1286,
    -111,   515,   717,   419,   476,   476,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,   419,   419,   419,   -10,   -10,   -10,
     251,   246,   686,   686,   263,   163,   163,   913,   243,   756,
    -111,  -111,   257,   267,  -111,   618,  -111,  -111,   276,   515,
     515,   163,  -111,   163,  -111,   515,   515,   955,  1271,  -111,
    -111,  -111,  -111,   479,    14,   281,   289,   292,   509,   293,
    -111,   296,   287,  1160,  1271,   -12,   -12,  1271,  1271,  1271,
    -111,  -111,  -111,    -6,   686,   302,   307,   127,  1271,  -111,
     314,   515,    13,    13,   315,   322,   323,   326,  1271,   329,
     330,   332,   306,  -111,  -111,  -111,  -111,   419,  -111,   338,
    -111,   313,   317,  -111,   346,  -111,  -111,   282,  -111,  -111,
    -111,    13,    13,    13,    13,   419,   419,   419,   281,  1271,
    -111,   350,   351,  -111,  -111,   773,   366,   370,    38,   373,
     385,     7,   557,   557,   557,   557,   557,  -111,  -111,  -111,
    -111,   997,  1039,  1081,  -111,  -111,   655,   359,   557,  -111,
     305,   419,   476,  -111,   304,  -111,  -111,  -111,  -111,  -111,
    -111,  -111,  -111,   369,   349,   387,   391,  1123,    95,   389,
    1197,  1234,   476,   393,  -111,   476,    38,    38,  -111,   394,
     395,   215,   109,   113,   334,  -111,  -111,  -111,   655,   -10,
     397,   405,   109,   399,     5,   420,   410,   557,  -111,  -111,
    -111,  -111,  -111,    38,   557,   372,  -111,   374,   424,   426,
    -111,  -111
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    59,     0,   107,     0,     0,   135,   136,   137,   151,
     155,   140,     0,     0,     0,     0,   138,     0,   141,   152,
       0,   156,   139,   153,   154,     0,     0,     6,     5,     7,
       0,   100,     0,   120,     0,     0,     0,   105,     0,   183,
     175,   176,   177,   178,   182,   180,   181,   130,   131,   179,
     134,   115,     0,   132,   133,     0,   143,   147,   149,   145,
      60,    61,   142,   146,   148,   144,     0,     0,     0,     1,
       4,     2,     3,    57,   107,    99,   100,     0,     0,     0,
      58,   121,   150,   106,     0,   108,     0,     0,     0,     0,
     116,     0,     0,   114,     0,     0,     0,    96,   184,   185,
     186,     0,   126,     0,    74,   129,    72,    71,    73,    89,
      95,     0,     0,     0,     0,   106,     0,     0,     0,   125,
     124,    89,     0,   119,    70,   113,    70,   104,     0,   109,
       0,     0,   103,     0,   110,   118,   117,     0,    96,     0,
      72,    71,    73,     0,     0,    84,    55,    51,    52,     0,
      97,    70,     0,     0,     0,     0,   167,   169,   157,   158,
     161,   160,   162,   163,   166,   159,   168,   170,   173,   174,
     171,   164,   165,   172,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,   103,     0,     0,    96,
     187,   188,    69,     0,    62,    66,    67,    64,     0,    70,
      70,   101,   112,   102,   111,    70,    70,     0,    81,    83,
      88,    91,    86,     0,     0,    96,     0,     0,     0,     0,
      93,     0,    94,     0,    89,    53,    54,    77,    76,    75,
      87,    90,    82,     0,    15,     0,     0,     0,    81,    63,
       0,    70,     0,     0,     0,     0,     0,     0,    81,     0,
       0,     0,     0,    84,    85,    37,    98,     0,    10,     0,
      16,     0,     0,    13,     0,    65,    68,    36,    28,    18,
      17,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       9,     0,     0,    12,    27,   107,     0,     0,     0,     0,
       0,     0,    36,    36,    36,    36,    36,    22,    21,    20,
      19,     0,     0,     0,    11,    14,     0,     0,    36,    30,
       0,     0,     0,    26,     0,    34,    35,    33,    32,    31,
      80,    79,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    48,    46,    25,    23,     0,     0,
       0,     0,    40,     0,     0,     0,     0,    36,    38,    39,
      47,    49,    50,     0,    36,    44,    45,    43,     0,     0,
      42,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -111,   295,  -111,  -109,  -111,  -110,   -76,   148,    33,  -111,
      98,  -111,  -111,    94,   -93,  -111,   177,  -111,    -7,   -46,
     -91,   -24,   -86,  -111,   -40,   -20,   -31,   146,    -2,  -111,
     376,   -59,   223,  -111,   156,   -11,     0,    46,   -17,  -111,
    -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    26,    27,   180,    28,   269,   310,   291,   292,   293,
     351,   352,   294,   295,   103,   104,   296,   192,   193,   105,
     106,   107,   108,   221,   224,    30,    31,    85,   125,    51,
      32,    33,    77,    35,    78,   174,   175,   176,    52,   110,
     197
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    50,   146,   140,   147,   184,    66,    96,   142,   148,
     308,    75,   109,   313,    79,   258,    82,   252,   267,   124,
     138,    82,    37,    38,   259,    53,   309,   140,   154,   155,
      67,   115,   142,   120,   268,    90,   186,    82,    82,   121,
      98,    99,   100,   308,   253,    76,   140,   127,   139,    93,
     122,   142,    83,   216,   143,   149,    75,    91,   217,   309,
      10,   225,   226,   147,   147,   196,   101,   196,   148,   148,
     141,   128,   187,   235,   236,    54,    84,    92,   143,    21,
     181,    10,    10,   181,   194,   102,   194,   289,    55,    60,
     314,   207,   196,   195,   141,   195,    61,   143,   177,   337,
      21,    21,   199,    82,   218,    79,    38,   223,   153,   178,
     177,   194,   119,   141,   149,   149,    82,   353,   132,   198,
     195,   178,   216,   154,   155,   260,    68,   217,   227,   228,
     229,   203,   177,   270,    69,   154,   155,   230,   231,   232,
     196,   196,   133,   178,   219,    73,   196,   196,   263,   178,
      80,   181,   181,   154,   155,   179,    36,   264,    81,   194,
     194,   297,   298,   299,   300,   194,   194,   179,   195,   195,
      38,   111,   205,   218,   195,   195,    38,    29,    79,   209,
     349,   350,   196,    36,    36,    36,   114,    50,   112,   179,
      86,    88,   244,   245,   113,   179,   126,   249,   246,   247,
     -51,   194,   135,   181,    29,    29,    29,   136,   250,   150,
     195,   279,   151,   177,   152,   -51,   -51,   182,   178,   328,
     185,   147,   183,    34,   178,   200,   148,   249,   201,   301,
     302,   303,   129,   116,   266,   134,   348,   249,   250,   341,
     206,   147,   343,   130,   147,   211,   148,   323,   250,   148,
      34,    34,    34,   210,   251,   154,   155,   233,    87,    89,
     344,   345,   129,   134,   179,   327,   -52,   234,   330,   237,
     179,   242,   149,   239,   331,   122,   202,   204,   361,   241,
     243,   -52,   -52,    50,   251,   254,    56,   366,   284,   355,
     -51,    57,   149,   209,   251,   149,   211,   255,    58,   -52,
     256,   117,    82,     1,     2,   -51,   -51,   137,   261,   356,
      59,   131,   285,   262,   -52,   -52,    95,   122,   265,   271,
     177,    96,    70,    71,    72,   329,   272,   273,     4,     5,
     274,   178,   275,   276,   138,   277,   278,     6,     7,     8,
       9,    10,    11,   281,    13,    14,    15,   282,   286,    16,
      17,   287,    18,   333,    98,    99,   100,    19,    39,   280,
      21,    22,   288,    23,   289,    94,    24,   283,   290,   306,
       2,   304,   305,   307,    95,   222,   311,   179,    74,    96,
     101,    40,    41,    42,    43,    44,    45,    46,   312,   324,
     332,   326,    97,   334,   335,   338,    49,    62,   342,   354,
     346,   347,    63,     6,     7,     8,     9,    10,    11,    64,
      13,   358,    98,    99,   100,    16,    17,   357,    18,   118,
     360,    65,   137,    19,   363,   144,    21,    22,    95,    23,
     364,    95,    24,    96,    95,   368,    96,   369,   101,    96,
     315,   316,   317,   318,   319,   370,    97,   371,   362,   138,
     359,     0,   145,     0,     0,     0,   325,   123,     0,     0,
       0,     0,     0,     0,     0,     0,    98,    99,   100,    98,
      99,   100,    98,    99,   100,   213,     0,     0,     0,   213,
       0,     0,   213,     0,   214,     0,     0,     0,    95,    96,
       0,   214,   101,    96,     0,   101,    96,     0,   101,     0,
       0,     0,   215,     0,     0,   365,   138,     0,     0,   138,
       0,     0,   367,   212,     0,     0,     0,     0,   156,     0,
     157,     0,    98,    99,   100,     0,    98,    99,   100,    98,
      99,   100,   188,     0,     0,     0,     0,     2,     0,     0,
     166,   167,     0,     0,     0,   189,     0,     0,   101,   168,
     169,   170,   101,     0,   173,   101,     0,     0,     0,     0,
       0,     4,     5,     0,   190,    98,    99,   100,   191,     0,
       6,     7,     8,     9,    10,    11,     0,    13,     1,     2,
       0,     0,    16,    17,     0,    18,     0,   285,     0,     0,
      19,   101,     0,    21,    22,     0,    23,     0,     0,    24,
       0,     0,     0,     4,     5,     0,     0,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,     0,    13,
      14,    15,     0,   286,    16,    17,   287,    18,    39,     0,
       0,     0,    19,     1,     2,    21,    22,   288,    23,   289,
       0,    24,     3,   290,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,     4,     5,
       0,     0,     0,     0,     0,     0,    49,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,     2,     0,    16,
      17,     0,    18,     0,     0,     3,     0,    19,     0,    20,
      21,    22,     0,    23,     0,     0,    24,    25,     0,     0,
       0,     4,     5,     0,     0,     0,     0,     0,     2,     0,
       6,     7,     8,     9,    10,    11,    74,    13,     0,     0,
       0,     0,    16,    17,     0,    18,     0,     0,     0,     0,
      19,     0,     0,    21,    22,     0,    23,     0,     0,    24,
       0,     6,     7,     8,     9,    10,    11,   220,    13,     0,
       0,     0,     0,    16,    17,     0,    18,     0,     0,   240,
       0,    19,     0,    38,    21,    22,    39,    23,     0,     0,
      24,     0,     6,     7,     8,     0,   151,    11,     0,    13,
      38,     0,     0,    39,    16,    17,     0,    18,     0,    40,
      41,    42,    43,    44,    45,    46,    22,     0,     0,     0,
       0,     0,    47,    48,    49,     0,    40,    41,    42,    43,
      44,    45,    46,     0,     0,     0,     0,     0,     0,    47,
      48,    49,  -115,     0,     0,    38,     0,     0,    39,     0,
       0,     0,     0,   208,     0,     0,     0,     0,   156,     0,
     157,     0,   158,   159,   160,   161,   162,   163,   164,     0,
       0,    40,    41,    42,    43,    44,    45,    46,   165,     0,
     166,   167,     0,     0,    47,    48,    49,     0,     0,   168,
     169,   170,   171,   172,   173,   212,     0,     0,     0,     0,
     156,     0,   157,     0,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     6,     7,     8,     0,     0,    11,
     165,    13,   166,   167,     0,     0,    16,    17,     0,    18,
       0,   168,   169,   170,   171,   172,   173,   238,    22,     0,
       0,     0,   156,     0,   157,     0,   158,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,   166,   167,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   248,
       0,     0,     0,     0,   156,     0,   157,     0,   158,   159,
     160,   161,   162,   163,   164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   165,     0,   166,   167,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,   171,   172,
     173,   320,     0,     0,     0,     0,   156,     0,   157,     0,
     158,   159,   160,   161,   162,   163,   164,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   165,     0,   166,   167,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   321,     0,     0,     0,     0,   156,     0,
     157,     0,   158,   159,   160,   161,   162,   163,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   165,     0,
     166,   167,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,   171,   172,   173,   322,     0,     0,     0,     0,
     156,     0,   157,     0,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,     0,   166,   167,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   336,     0,     0,
       0,     0,   156,     0,   157,     0,   158,   159,   160,   161,
     162,   163,   164,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   165,     0,   166,   167,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,   171,   172,   173,   156,
       0,   157,     0,   158,   159,   160,   161,   162,   163,   164,
     257,     0,     0,     0,     0,     0,     0,     0,     0,   165,
       0,   166,   167,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,   171,   172,   173,   156,     0,   157,     0,
     158,   159,   160,   161,   162,   163,   164,     0,   339,     0,
       0,     0,     0,     0,     0,     0,   165,     0,   166,   167,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
     171,   172,   173,   156,     0,   157,     0,   158,   159,   160,
     161,   162,   163,   164,     0,   340,     0,     0,     0,     0,
       0,     0,     0,   165,     0,   166,   167,     0,     0,     0,
       0,     0,     0,     0,   168,   169,   170,   171,   172,   173,
     156,     0,   157,     0,   158,   159,   160,   161,   162,   163,
     164,     0,     0,     0,     0,   156,     0,   157,     0,     0,
     165,     0,   166,   167,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,   171,   172,   173,   166,   167,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
       0,   173,     6,     7,     8,     0,    10,    11,     0,    13,
       0,     0,     0,     0,    16,    17,     0,    18,     0,     0,
       0,     0,     0,     0,     0,    21,    22
};

static const yytype_int16 yycheck[] =
{
      31,     3,    95,    94,    95,   114,    61,    17,    94,    95,
       5,    31,    52,     6,    31,    21,    15,     3,     5,     3,
      30,    15,    30,     7,    30,    30,    21,   118,    40,    41,
      85,    30,   118,    79,    21,     8,    30,    15,    15,    79,
      50,    51,    52,     5,    30,    76,   137,    30,    94,    51,
      81,   137,    30,   144,    94,    95,    76,    30,   144,    21,
      59,   154,   155,   154,   155,   124,    76,   126,   154,   155,
      94,    54,   118,   182,   183,    30,    54,    50,   118,    78,
     111,    59,    59,   114,   124,    52,   126,    82,    30,    21,
      83,   137,   151,   124,   118,   126,    21,   137,   109,     4,
      78,    78,     3,    15,   144,   122,     7,   153,    25,   109,
     121,   151,    79,   137,   154,   155,    15,     4,    30,   126,
     151,   121,   213,    40,    41,   234,    30,   213,   174,   175,
     176,    30,   143,   243,     0,    40,    41,   177,   178,   179,
     199,   200,    54,   143,   151,    21,   205,   206,    21,   149,
      21,   182,   183,    40,    41,   109,     0,    30,    22,   199,
     200,   271,   272,   273,   274,   205,   206,   121,   199,   200,
       7,     5,     3,   213,   205,   206,     7,     0,   195,     4,
      71,    72,   241,    27,    28,    29,     5,   189,    30,   143,
      34,    35,   199,   200,    30,   149,     3,   208,   205,   206,
      25,   241,     8,   234,    27,    28,    29,     8,   208,    30,
     241,   257,     3,   224,     3,    40,    41,     5,   218,   312,
      30,   312,     5,     0,   224,     3,   312,   238,    30,   275,
     276,   277,    86,    77,   241,    89,    21,   248,   238,   332,
       3,   332,   335,    87,   335,     4,   332,   306,   248,   335,
      27,    28,    29,     4,   208,    40,    41,     6,    35,    36,
     336,   337,   116,   117,   218,   311,    25,    21,   314,     6,
     224,     4,   312,    30,   314,   306,   130,   131,   354,    22,
       4,    40,    41,   285,   238,     4,    55,   363,     6,   348,
      25,    60,   332,     4,   248,   335,     4,     4,    67,    25,
       4,    78,    15,    21,    22,    40,    41,     3,     6,   349,
      79,    88,    30,     6,    40,    41,    12,   348,     4,     4,
     331,    17,    27,    28,    29,    21,     4,     4,    46,    47,
       4,   331,     3,     3,    30,     3,    30,    55,    56,    57,
      58,    59,    60,    30,    62,    63,    64,    30,    66,    67,
      68,    69,    70,     4,    50,    51,    52,    75,    10,    21,
      78,    79,    80,    81,    82,     3,    84,    21,    86,     3,
      22,    21,    21,     3,    12,   152,     3,   331,    30,    17,
      76,    33,    34,    35,    36,    37,    38,    39,     3,    30,
      21,    86,    30,     6,     3,     6,    48,    55,     5,    65,
       6,     6,    60,    55,    56,    57,    58,    59,    60,    67,
      62,     6,    50,    51,    52,    67,    68,    20,    70,     3,
      21,    79,     3,    75,     4,     3,    78,    79,    12,    81,
      20,    12,    84,    17,    12,    63,    17,    63,    76,    17,
     292,   293,   294,   295,   296,    21,    30,    21,   354,    30,
     352,    -1,    30,    -1,    -1,    -1,   308,    81,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    52,    50,
      51,    52,    50,    51,    52,     3,    -1,    -1,    -1,     3,
      -1,    -1,     3,    -1,    12,    -1,    -1,    -1,    12,    17,
      -1,    12,    76,    17,    -1,    76,    17,    -1,    76,    -1,
      -1,    -1,    30,    -1,    -1,   357,    30,    -1,    -1,    30,
      -1,    -1,   364,     4,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    50,    51,    52,    -1,    50,    51,    52,    50,
      51,    52,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      31,    32,    -1,    -1,    -1,    30,    -1,    -1,    76,    40,
      41,    42,    76,    -1,    45,    76,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    -1,    62,    21,    22,
      -1,    -1,    67,    68,    -1,    70,    -1,    30,    -1,    -1,
      75,    76,    -1,    78,    79,    -1,    81,    -1,    -1,    84,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    68,    69,    70,    10,    -1,
      -1,    -1,    75,    21,    22,    78,    79,    80,    81,    82,
      -1,    84,    30,    86,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    22,    -1,    67,
      68,    -1,    70,    -1,    -1,    30,    -1,    75,    -1,    77,
      78,    79,    -1,    81,    -1,    -1,    84,    85,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      55,    56,    57,    58,    59,    60,    30,    62,    -1,    -1,
      -1,    -1,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,
      75,    -1,    -1,    78,    79,    -1,    81,    -1,    -1,    84,
      -1,    55,    56,    57,    58,    59,    60,    30,    62,    -1,
      -1,    -1,    -1,    67,    68,    -1,    70,    -1,    -1,     3,
      -1,    75,    -1,     7,    78,    79,    10,    81,    -1,    -1,
      84,    -1,    55,    56,    57,    -1,     3,    60,    -1,    62,
       7,    -1,    -1,    10,    67,    68,    -1,    70,    -1,    33,
      34,    35,    36,    37,    38,    39,    79,    -1,    -1,    -1,
      -1,    -1,    46,    47,    48,    -1,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,     4,    -1,    -1,     7,    -1,    -1,    10,    -1,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    29,    -1,
      31,    32,    -1,    -1,    46,    47,    48,    -1,    -1,    40,
      41,    42,    43,    44,    45,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    60,
      29,    62,    31,    32,    -1,    -1,    67,    68,    -1,    70,
      -1,    40,    41,    42,    43,    44,    45,     4,    79,    -1,
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
      -1,    40,    41,    42,    43,    44,    45,     4,    -1,    -1,
      -1,    -1,     9,    -1,    11,    -1,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,     9,
      -1,    11,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,     9,    -1,    11,    -1,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,     9,    -1,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
       9,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    -1,     9,    -1,    11,    -1,    -1,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    -1,
      -1,    45,    55,    56,    57,    -1,    59,    60,    -1,    62,
      -1,    -1,    -1,    -1,    67,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    22,    30,    46,    47,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    67,    68,    70,    75,
      77,    78,    79,    81,    84,    85,    88,    89,    91,   103,
     112,   113,   117,   118,   119,   120,   121,    30,     7,    10,
      33,    34,    35,    36,    37,    38,    39,    46,    47,    48,
     115,   116,   125,    30,    30,    30,    55,    60,    67,    79,
      21,    21,    55,    60,    67,    79,    61,    85,    30,     0,
      88,    88,    88,    21,    30,   112,   113,   119,   121,   125,
      21,    22,    15,    30,    54,   114,   121,   119,   121,   119,
       8,    30,    50,   115,     3,    12,    17,    30,    50,    51,
      52,    76,    95,   101,   102,   106,   107,   108,   109,   111,
     126,     5,    30,    30,     5,    30,   121,   119,     3,    95,
     106,   111,   113,   117,     3,   115,     3,    30,    54,   114,
     121,   119,    30,    54,   114,     8,     8,     3,    30,   106,
     107,   108,   109,   111,     3,    30,   101,   107,   109,   111,
      30,     3,     3,    25,    40,    41,     9,    11,    13,    14,
      15,    16,    17,    18,    19,    29,    31,    32,    40,    41,
      42,    43,    44,    45,   122,   123,   124,   122,   123,   124,
      90,   113,     5,     5,    90,    30,    30,   106,    17,    30,
      49,    53,   104,   105,   111,   113,   118,   127,   105,     3,
       3,    30,   114,    30,   114,     3,     3,   106,     4,     4,
       4,     4,     4,     3,    12,    30,   107,   109,   111,   105,
      30,   110,   119,   106,   111,   101,   101,   106,   106,   106,
     111,   111,   111,     6,    21,    90,    90,     6,     4,    30,
       3,    22,     4,     4,   105,   105,   105,   105,     4,   122,
     123,   124,     3,    30,     4,     4,     4,    20,    21,    30,
      90,     6,     6,    21,    30,     4,   105,     5,    21,    92,
      92,     4,     4,     4,     4,     3,     3,     3,    30,   106,
      21,    30,    30,    21,     6,    30,    66,    69,    80,    82,
      86,    94,    95,    96,    99,   100,   103,    92,    92,    92,
      92,   106,   106,   106,    21,    21,     3,     3,     5,    21,
      93,     3,     3,     6,    83,    94,    94,    94,    94,    94,
       4,     4,     4,   118,    30,    94,    86,   106,   101,    21,
     106,   111,    21,     4,     6,     3,     4,     4,     6,    21,
      21,   101,     5,   101,    93,    93,     6,     6,    21,    71,
      72,    97,    98,     4,    65,   118,   111,    20,     6,    97,
      21,    93,   100,     4,    20,    94,    93,    94,    63,    63,
      21,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    94,    94,    95,    96,    97,
      97,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   107,   107,   108,   108,   108,
     109,   109,   109,   110,   110,   111,   111,   111,   111,   112,
     112,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   114,   115,   115,   116,   116,   116,   117,
     117,   117,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   123,   123,   123,
     123,   123,   123,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   126,   126,   127,   127
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     1,     1,     0,     7,
       6,     8,     7,     6,     8,     2,     3,     6,     6,     7,
       7,     7,     7,     6,     5,     6,     3,     2,     1,     3,
       1,     2,     2,     2,     2,     2,     0,     4,     7,     2,
       1,     6,     5,     4,     3,     9,     5,     7,     5,     7,
       7,     1,     1,     3,     3,     2,     5,     2,     2,     1,
       2,     2,     1,     2,     1,     3,     1,     1,     3,     1,
       0,     1,     1,     1,     1,     3,     3,     3,     7,     7,
       7,     3,     3,     3,     2,     4,     3,     3,     3,     1,
       3,     3,     3,     1,     1,     1,     1,     2,     4,     2,
       1,     4,     4,     3,     3,     2,     2,     1,     2,     3,
       3,     4,     4,     2,     2,     0,     2,     3,     3,     3,
       1,     0,     3,     5,     3,     3,     3,     3,     5,     3,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 9: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 166 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1934 "y.tab.c"
    break;

  case 10: /* structure: STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 167 "./C_parser.y"
                                                                                                                   {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1940 "y.tab.c"
    break;

  case 11: /* structure: TYPEDEF_TOK STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 168 "./C_parser.y"
                                                                                                                                      {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
#line 1946 "y.tab.c"
    break;

  case 12: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 169 "./C_parser.y"
                                                                                                                         {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1952 "y.tab.c"
    break;

  case 13: /* structure: UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK  */
#line 170 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1958 "y.tab.c"
    break;

  case 14: /* structure: TYPEDEF_TOK UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK  */
#line 171 "./C_parser.y"
                                                                                                                                     {fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
#line 1964 "y.tab.c"
    break;

  case 17: /* function: datatype MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 177 "./C_parser.y"
                                                                                                       {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1970 "y.tab.c"
    break;

  case 18: /* function: datatype ID_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 178 "./C_parser.y"
                                                                                                        {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1976 "y.tab.c"
    break;

  case 19: /* function: qualifier datatype MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 179 "./C_parser.y"
                                                                                                                         {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1982 "y.tab.c"
    break;

  case 20: /* function: qualifier datatype ID_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 180 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1988 "y.tab.c"
    break;

  case 21: /* function: datatype qualifier MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 181 "./C_parser.y"
                                                                                                                         {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 1994 "y.tab.c"
    break;

  case 22: /* function: datatype qualifier ID_TOK LPAREN_TOK params RPAREN_TOK func_block  */
#line 182 "./C_parser.y"
                                                                                                                  {fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
#line 2000 "y.tab.c"
    break;

  case 38: /* switch_statement: SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_statements RCURLY_TOK  */
#line 212 "./C_parser.y"
                                                                                                               {fprintf(yyout,"\nParsed a switch block at line no:- %d\n",yylineno);}
#line 2006 "y.tab.c"
    break;

  case 41: /* case_statement: CASE_TOK data COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 219 "./C_parser.y"
                                                                                             {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2012 "y.tab.c"
    break;

  case 42: /* case_statement: DEFAULT_TOK COLON_TOK statements BREAK_TOK SEMI_COLON_TOK  */
#line 220 "./C_parser.y"
                                                                                                           {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2018 "y.tab.c"
    break;

  case 43: /* case_statement: CASE_TOK data COLON_TOK statements  */
#line 221 "./C_parser.y"
                                                                                    {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2024 "y.tab.c"
    break;

  case 44: /* case_statement: DEFAULT_TOK COLON_TOK statements  */
#line 222 "./C_parser.y"
                                                                                  {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
#line 2030 "y.tab.c"
    break;

  case 45: /* iterative_statement: FOR_TOK LPAREN_TOK initialization SEMI_COLON_TOK conditional_expression SEMI_COLON_TOK initialization RPAREN_TOK block  */
#line 225 "./C_parser.y"
                                                                                                                                                        {fprintf(yyout,"\nParsed a for loop at line no:- %d\n",yylineno);}
#line 2036 "y.tab.c"
    break;

  case 46: /* iterative_statement: WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK block  */
#line 226 "./C_parser.y"
                                                                                                              {fprintf(yyout,"\nParsed a while loop at line no:- %d\n",yylineno);}
#line 2042 "y.tab.c"
    break;

  case 47: /* iterative_statement: DO_TOK block WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK SEMI_COLON_TOK  */
#line 227 "./C_parser.y"
                                                                                                                                    {fprintf(yyout,"\nParsed a do while at line no:- %d\n",yylineno);}
#line 2048 "y.tab.c"
    break;

  case 48: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block  */
#line 230 "./C_parser.y"
                                                                       {fprintf(yyout,"\nParsed an if statement at line no:- %d\n",yylineno);}
#line 2054 "y.tab.c"
    break;

  case 49: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK block  */
#line 231 "./C_parser.y"
                                                                                                              {fprintf(yyout,"\nParsed an if else statement at line no:- %d\n",yylineno);}
#line 2060 "y.tab.c"
    break;

  case 50: /* conditional_statement: IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK conditional_statement  */
#line 232 "./C_parser.y"
                                                                                                                              {fprintf(yyout,"\nParsed an if else statement at line no:- %d\n",yylineno);}
#line 2066 "y.tab.c"
    break;

  case 56: /* ternary_expression: conditional_expression QUESTION_MARK_TOK expression COLON_TOK expression  */
#line 242 "./C_parser.y"
                                                                                                          {fprintf(yyout,"\nParsed a ternary expression at line no:- %d\n",yylineno);}
#line 2072 "y.tab.c"
    break;

  case 82: /* logical_expression: data logical_operator data  */
#line 278 "./C_parser.y"
                                                            {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2078 "y.tab.c"
    break;

  case 83: /* logical_expression: LPAREN_TOK logical_expression RPAREN_TOK  */
#line 279 "./C_parser.y"
                                                                                         {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2084 "y.tab.c"
    break;

  case 84: /* logical_expression: NOT_TOK ID_TOK  */
#line 280 "./C_parser.y"
                                                               {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2090 "y.tab.c"
    break;

  case 85: /* logical_expression: NOT_TOK LPAREN_TOK ID_TOK RPAREN_TOK  */
#line 281 "./C_parser.y"
                                                                                     {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2096 "y.tab.c"
    break;

  case 86: /* logical_expression: LPAREN_TOK data RPAREN_TOK  */
#line 282 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
#line 2102 "y.tab.c"
    break;

  case 87: /* arithmetic_expression: data num_operator data  */
#line 285 "./C_parser.y"
                                               {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2108 "y.tab.c"
    break;

  case 88: /* arithmetic_expression: LPAREN_TOK arithmetic_expression RPAREN_TOK  */
#line 286 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2114 "y.tab.c"
    break;

  case 89: /* arithmetic_expression: data  */
#line 287 "./C_parser.y"
                                                     {fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
#line 2120 "y.tab.c"
    break;

  case 90: /* relational_expression: data relational_operator data  */
#line 291 "./C_parser.y"
                                                      {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2126 "y.tab.c"
    break;

  case 91: /* relational_expression: LPAREN_TOK relational_expression RPAREN_TOK  */
#line 292 "./C_parser.y"
                                                                                            {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2132 "y.tab.c"
    break;

  case 92: /* relational_expression: LPAREN_TOK data RPAREN_TOK  */
#line 293 "./C_parser.y"
                                                                           {fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
#line 2138 "y.tab.c"
    break;

  case 93: /* data_t: ID_TOK  */
#line 297 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s was not declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2151 "y.tab.c"
    break;

  case 96: /* data: ID_TOK  */
#line 309 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s was not declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2164 "y.tab.c"
    break;

  case 97: /* data: AND_TOK ID_TOK  */
#line 318 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s was not declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2177 "y.tab.c"
    break;

  case 101: /* declaration: storage_class datatype qualifier ID_TOK  */
#line 334 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{	
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2194 "y.tab.c"
    break;

  case 102: /* declaration: storage_class qualifier datatype ID_TOK  */
#line 347 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{	
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2211 "y.tab.c"
    break;

  case 103: /* declaration: qualifier datatype ID_TOK  */
#line 360 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{	
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2228 "y.tab.c"
    break;

  case 104: /* declaration: datatype qualifier ID_TOK  */
#line 373 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{	
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2245 "y.tab.c"
    break;

  case 105: /* declaration: COMMA_TOK ID_TOK  */
#line 386 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2262 "y.tab.c"
    break;

  case 106: /* declaration: datatype ID_TOK  */
#line 399 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{	
								insert((yyvsp[0].idval));
							}
							else
							{
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2279 "y.tab.c"
    break;

  case 107: /* declaration: ID_TOK  */
#line 412 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s has not been declared previously\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2292 "y.tab.c"
    break;

  case 113: /* array_data: ID_TOK brackets  */
#line 428 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-1].idval)))
							{
								insert((yyvsp[-1].idval));
							}
							else
							{								
								fprintf(yyout,"\n%s is already declared previously\n",(yyvsp[-1].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2309 "y.tab.c"
    break;

  case 126: /* initialization: ID_TOK assignment_operator func_call  */
#line 461 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-2].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-2].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2322 "y.tab.c"
    break;

  case 127: /* initialization: ID_TOK assignment_operator data  */
#line 470 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-2].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-2].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2335 "y.tab.c"
    break;

  case 128: /* initialization: ID_TOK assignment_operator LPAREN_TOK expression RPAREN_TOK  */
#line 479 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-4].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-4].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2348 "y.tab.c"
    break;

  case 129: /* initialization: ID_TOK assignment_operator expression  */
#line 488 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-2].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-2].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2361 "y.tab.c"
    break;

  case 130: /* initialization: ID_TOK PLUS_PLUS_TOK  */
#line 497 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-1].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-1].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2374 "y.tab.c"
    break;

  case 131: /* initialization: ID_TOK MINUS_MINUS_TOK  */
#line 506 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-1].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-1].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2387 "y.tab.c"
    break;

  case 132: /* initialization: PLUS_PLUS_TOK ID_TOK  */
#line 515 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2400 "y.tab.c"
    break;

  case 133: /* initialization: MINUS_MINUS_TOK ID_TOK  */
#line 524 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[0].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[0].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2413 "y.tab.c"
    break;

  case 134: /* initialization: ID_TOK brackets  */
#line 533 "./C_parser.y"
                                                {
							if(!lookup((yyvsp[-1].idval)))
							{
								fprintf(yyout,"\n%s has not been declared earlier\n",(yyvsp[-1].idval));
								yyerror("Syntax Error");
								exit(EXIT_FAILURE);
							}
						}
#line 2426 "y.tab.c"
    break;


#line 2430 "y.tab.c"

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

#line 618 "./C_parser.y"


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


%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "lex.yy.c"
	void yyerror(char*);

	// Symbol table entry
	// typedef struct Symbol
	// {
	// 	char* var;
	// 	struct Symbol* next;
	// }Symbol;

	// // Head of the symbol table
	// Symbol *symbol_table=NULL;

	// // Function to lookup a symbol in the symbol table
	// int lookup(char* lex)
	// {
	// 	Symbol* curr=symbol_table;
	// 	while(curr!=NULL)
	// 	{
	// 		if(strcmp(curr->var,lex)==0)
	// 		{
	// 			return 1; // found
	// 		}
	// 		curr=curr->next;
	// 	}
	// 	return 0; // not found
	// }

	// // Function to insert a symbol into the symbol table
	// int insert(char* lex)
	// {
	// 	Symbol* curr=symbol_table;
	// 	while(curr!=NULL)
	// 	{
	// 		if(strcmp(curr->var,lex)==0)
	// 		{
	// 			return 0;		// alreay declared
	// 		}
	// 		curr=curr->next;
	// 	}

	// 	Symbol* new_sym=(Symbol*)malloc(sizeof(Symbol));
	// 	new_sym->var=strdup(lex);
	// 	new_sym->next=symbol_table;
	// 	symbol_table=new_sym;
	// 	return 1; // not declared
	// }

%}

%token LPAREN_TOK 
%token RPAREN_TOK 
%token LCURLY_TOK 
%token RCURLY_TOK 
%token LBRACKET_TOK
%token RBRACKET_TOK 
%token GT_TOK 
%token EQUAL_TOK 
%token LT_TOK 
%token NOT_TOK 
%token PLUS_TOK 
%token MINUS_TOK 
%token MUL_TOK 
%token DIV_TOK 
%token AND_TOK 
%token OR_TOK 
%token XOR_TOK 
%token COLON_TOK 
%token SEMI_COLON_TOK 
%token COMMA_TOK 
%token BITWISE_NOT_TOK 
%token PERIOD_TOK 																																																																																																																
%token QUESTION_MARK_TOK 
%token SINGLE_INVERTED_COMMA 
%token DOUBLE_INVERTED_COMMA
%token ESCAPE_NOTATION_TOK
%token MODULO_TOK 
%token ID_TOK 
%token GTE_TOK 
%token LTE_TOK
%token PLUS_EQUAL_TOK 
%token MINUS_EQUAL_TOK 
%token MUL_EQUAL_TOK 
%token DIV_EQUAL_TOK			
%token XOR_EQUAL_TOK 
%token BIT_AND_EQUAL_TOK 
%token BIT_OR_EQUAL_TOK 
%token LOG_AND_TOK 
%token LOG_OR_TOK 
%token EQUAL_EQUAL_TOK
%token LEFT_SHIFT_TOK 
%token RIGHT_SHIFT_TOK 
%token NOT_EQUAL_TOK 
%token PLUS_PLUS_TOK 
%token MINUS_MINUS_TOK 
%token MOD_EQUAL_TOK 
%token STRING_LITERAL 
%token INTEGER_LITERAL
%token FLOAT_LITERAL 
%token EXP_LITERAL 
%token CHAR_CONST_TOK 
%token MAIN_FUNC_TOK 
%token INT_TOK
%token FLOAT_TOK
%token DOUBLE_TOK
%token AUTO_TOK
%token CONST_TOK 
%token SHORT_TOK
%token STRUCT_TOK
%token UNSIGNED_TOK 
%token BREAK_TOK
%token CONTINUE_TOK 
%token ELSE_TOK
%token FOR_TOK 
%token LONG_TOK 
%token SIGNED_TOK 
%token SWITCH_TOK 
%token VOID_TOK 
%token CASE_TOK 
%token DEFAULT_TOK 
%token ENUM_TOK 
%token GOTO_TOK 
%token REGISTER_TOK 
%token SIZEOF_TOK
%token TYPEDEF_TOK
%token VOLATILE_TOK
%token CHAR_TOK 
%token DO_TOK 
%token EXTERN_TOK 
%token IF_TOK
%token RETURN_TOK
%token STATIC_TOK
%token UNION_TOK
%token WHILE_TOK

%start START 

%%

START					:function START
						|statement START
						|structure START
						|function
						|structure
						|statement
						|
						;

structure				:STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK
						|STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK
						|TYPEDEF_TOK STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK
						|UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK
						|UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK
						|TYPEDEF_TOK UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK
						;

struct_decl 			:declaration SEMI_COLON_TOK
						|declaration SEMI_COLON_TOK struct_decl

function				:datatype MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block
						|datatype ID_TOK LPAREN_TOK params RPAREN_TOK func_block 
						|qualifier datatype MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block
						|qualifier datatype ID_TOK LPAREN_TOK params RPAREN_TOK func_block
						|datatype qualifier MAIN_FUNC_TOK LPAREN_TOK params RPAREN_TOK func_block
						|datatype qualifier ID_TOK LPAREN_TOK params RPAREN_TOK func_block
						;

func_block				:LCURLY_TOK statements RETURN_TOK data SEMI_COLON_TOK RCURLY_TOK
						|LCURLY_TOK statements RETURN_TOK SEMI_COLON_TOK RCURLY_TOK
						|LCURLY_TOK statements RETURN_TOK expression SEMI_COLON_TOK RCURLY_TOK
						|LCURLY_TOK statements RCURLY_TOK
						|LCURLY_TOK RCURLY_TOK
						|SEMI_COLON_TOK
						;
/* 
blocks					:block blocks 
						|
						; */

block					:LCURLY_TOK statements RCURLY_TOK
						|SEMI_COLON_TOK
						;

statements				:statement statements
						|conditional_statement statements 
						|iterative_statement statements
						|func_call statements
						|switch_statement statements
						|
						;

func_call				:ID_TOK LPAREN_TOK params RPAREN_TOK
						;

switch_statement		:SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_statements RCURLY_TOK 
						;

case_statements			:case_statement case_statements
						|case_statement
						;

case_statement			:CASE_TOK data COLON_TOK statements BREAK_TOK SEMI_COLON_TOK
						|DEFAULT_TOK COLON_TOK statements BREAK_TOK SEMI_COLON_TOK
						|CASE_TOK data COLON_TOK statements
						|DEFAULT_TOK COLON_TOK statements 
						;

iterative_statement		:FOR_TOK LPAREN_TOK initialization SEMI_COLON_TOK conditional_expression SEMI_COLON_TOK initialization RPAREN_TOK block
						|WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK block 
						|DO_TOK block WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK SEMI_COLON_TOK
						;

conditional_statement	:IF_TOK LPAREN_TOK expression RPAREN_TOK block
						|IF_TOK LPAREN_TOK expression RPAREN_TOK block ELSE_TOK block
						|IF_TOK	LPAREN_TOK expression RPAREN_TOK block ELSE_TOK conditional_statement
						;

conditional_expression	:logical_expression
						|relational_expression
						|conditional_expression LOG_AND_TOK conditional_expression
						|conditional_expression LOG_OR_TOK conditional_expression
						|NOT_TOK conditional_expression
						;

ternary_expression		:conditional_expression QUESTION_MARK_TOK expression COLON_TOK expression
						;

statement				:declarations SEMI_COLON_TOK
						|initializations SEMI_COLON_TOK
						|SEMI_COLON_TOK
						|BREAK_TOK SEMI_COLON_TOK
						|CONTINUE_TOK SEMI_COLON_TOK
						;

param					:ID_TOK
						|number_literal
						|AND_TOK ID_TOK
						|other_literal
						|ID_TOK LPAREN_TOK RPAREN_TOK
						|declaration
						;

params					:param COMMA_TOK params
						|param
						|
						;

expression				:arithmetic_expression
						|logical_expression
						|relational_expression
						|ternary_expression
						|expression logical_operator expression
						|expression relational_operator expression
						|expression num_operator expression
						|LPAREN_TOK expression RPAREN_TOK logical_operator LPAREN_TOK expression RPAREN_TOK
						|LPAREN_TOK expression RPAREN_TOK relational_operator LPAREN_TOK expression RPAREN_TOK
						|LPAREN_TOK expression RPAREN_TOK num_operator LPAREN_TOK expression RPAREN_TOK
						|LPAREN_TOK expression RPAREN_TOK
						;

logical_expression		:data logical_operator data
						|LPAREN_TOK logical_expression RPAREN_TOK
						|NOT_TOK ID_TOK
						|NOT_TOK LPAREN_TOK ID_TOK RPAREN_TOK
						|LPAREN_TOK data RPAREN_TOK
						;

arithmetic_expression	:data num_operator data
						|LPAREN_TOK arithmetic_expression RPAREN_TOK
						|data
						;


relational_expression	:data relational_operator data
						|LPAREN_TOK relational_expression RPAREN_TOK
						|LPAREN_TOK data RPAREN_TOK
						;

data					:number_literal
						|ID_TOK
						|AND_TOK ID_TOK
						;

declarations 			:declaration COMMA_TOK declarations
						|declaration
						|
						;

declaration				:storage_class datatype qualifier ID_TOK
						|storage_class qualifier datatype ID_TOK
						|qualifier datatype ID_TOK
						|datatype qualifier ID_TOK
						|datatype ID_TOK
						|ID_TOK
						|datatype array_data
						|datatype qualifier array_data
						|qualifier datatype array_data
						|storage_class qualifier datatype array_data
						|storage_class datatype qualifier array_data
						;

array_data				:ID_TOK brackets
						;

brackets				:bracket brackets
						|
						;

bracket					:LBRACKET_TOK RBRACKET_TOK
						|LBRACKET_TOK INTEGER_LITERAL RBRACKET_TOK
						|LBRACKET_TOK ID_TOK RBRACKET_TOK
						;

initializations			:initialization COMMA_TOK initializations
						|initialization
						|
						;

initialization			:declaration assignment_operator data 
						|declaration assignment_operator LPAREN_TOK expression RPAREN_TOK
						|declaration assignment_operator expression
						|declaration assignment_operator func_call
						|ID_TOK assignment_operator func_call
						|ID_TOK assignment_operator data 
						|ID_TOK assignment_operator LPAREN_TOK expression RPAREN_TOK
						|ID_TOK assignment_operator expression
						|ID_TOK PLUS_PLUS_TOK
						|ID_TOK MINUS_MINUS_TOK
						|PLUS_PLUS_TOK ID_TOK
						|MINUS_MINUS_TOK ID_TOK
						;

datatype				:INT_TOK
						|FLOAT_TOK
						|DOUBLE_TOK
						|LONG_TOK
						|CHAR_TOK
						|SHORT_TOK
						|VOID_TOK
						|SIGNED_TOK INT_TOK
						|UNSIGNED_TOK INT_TOK
						|SIGNED_TOK CHAR_TOK
						|UNSIGNED_TOK CHAR_TOK
						|SIGNED_TOK SHORT_TOK
						|UNSIGNED_TOK SHORT_TOK
						|SIGNED_TOK LONG_TOK
						|UNSIGNED_TOK LONG_TOK
						|datatype MUL_TOK
						;

storage_class			:AUTO_TOK
						|REGISTER_TOK
						|EXTERN_TOK
						|STATIC_TOK 
						;

qualifier				:CONST_TOK
						|VOLATILE_TOK
						;


num_operator			:PLUS_TOK
						|MINUS_TOK
						|MODULO_TOK
						|DIV_TOK
						|MUL_TOK
						|AND_TOK
						|OR_TOK
						|LEFT_SHIFT_TOK
						|RIGHT_SHIFT_TOK
						|XOR_TOK
						;


relational_operator		:GT_TOK
						|GTE_TOK
						|LT_TOK
						|LTE_TOK
						|EQUAL_EQUAL_TOK
						|NOT_EQUAL_TOK
						;

logical_operator		:LOG_AND_TOK
						|LOG_OR_TOK
						;

assignment_operator		:PLUS_EQUAL_TOK
						|MINUS_EQUAL_TOK
						|MUL_EQUAL_TOK
						|DIV_EQUAL_TOK
						|MOD_EQUAL_TOK
						|BIT_AND_EQUAL_TOK
						|BIT_OR_EQUAL_TOK
						|XOR_EQUAL_TOK
						|EQUAL_TOK
						;
					

number_literal			:INTEGER_LITERAL
						|FLOAT_LITERAL
						|EXP_LITERAL
						;	

other_literal           :STRING_LITERAL
						|CHAR_CONST_TOK
						;

%%

void yyerror(char* yyErrorText)
{
	printf("\nyyerror: %s\n",yyErrorText);
}

int main(int argc,char* argv[])
{
	yylineno=0;
	if(argc!=2)
	{
		fprintf(stderr,"Usage:- %s <input_source_code_file>\n",argv[0]);
		exit(EXIT_FAILURE);
	}

	yyin=fopen(argv[1],"r");
	if(yyin==NULL)
	{
		fprintf(stderr,"fopen() error\n");
		exit(EXIT_FAILURE);
	}

	if(yyparse()==0)
	{
		printf("\nProgram successfully parsed\n");
	}
	else
	{
		printf("Parsing error at line number %d\n",yylineno);
	}
	return 0;
}


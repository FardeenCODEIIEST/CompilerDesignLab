%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "hashTable.h"
	#include "lex.yy.c"
	void yyerror(char*);
	int scope=0;
	hash_map* map;
	char type[LEX_SIZE];
%}

%union{
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
}

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
%token <idval> ID_TOK 
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

enum_const				:ID_TOK COMMA_TOK enum_const
						|ID_TOK
						;


enum_decl				:ENUM_TOK ID_TOK LCURLY_TOK enum_const RCURLY_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed an enum declaration at line no:- %d\n",yylineno);}
						;

enum_init				:ENUM_TOK ID_TOK ID_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed an enum initialisation at line no:- %d\n",yylineno);}
						;

structure				:STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK {fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
						|STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
						|TYPEDEF_TOK STRUCT_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed a structure at line no:- %d\n",yylineno);}
						|UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
						|UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
						|TYPEDEF_TOK UNION_TOK ID_TOK LCURLY_TOK struct_decl RCURLY_TOK ID_TOK SEMI_COLON_TOK{fprintf(yyout,"\nParsed a union at line no:- %d\n",yylineno);}
						;

struct_decl 			:declaration SEMI_COLON_TOK
						|declaration SEMI_COLON_TOK struct_decl

function				:datatype MAIN_FUNC_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
						|datatype ID_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);} 
						|qualifier datatype MAIN_FUNC_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
						|qualifier datatype ID_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
						|datatype qualifier MAIN_FUNC_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
						|datatype qualifier ID_TOK LPAREN_TOK{scope++;} params RPAREN_TOK func_block{fprintf(yyout,"\nParsed a function at line no:- %d\n",yylineno);}
						;

func_block               :LCURLY_TOK { 
                            scope++; 
                        } block_statements RETURN_TOK data SEMI_COLON_TOK RCURLY_TOK {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed a function block with return at line no: %d\n",yylineno);
                        }
                        |LCURLY_TOK {
                            scope++;
                        } block_statements RETURN_TOK SEMI_COLON_TOK RCURLY_TOK {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed a void function block at line no: %d\n",yylineno);
                        }
                        |LCURLY_TOK {
                            scope++;
                        } block_statements RCURLY_TOK {
                            hashMapRemoveScope(map, scope);
                            scope--;
                            fprintf(yyout,"\nParsed an empty function block at line no: %d\n",yylineno);
                        }
                        |SEMI_COLON_TOK
                        ;

/* 
blocks					:block blocks 
						|
						; */


block                   :LCURLY_TOK {
                            scope++;
                        } block_statements RCURLY_TOK {
                            hashMapRemoveScope(map, scope);
                            scope--;
                        }
                        |statement
                        ;

statements				:statement statements
						|conditional_statement statements 
						|iterative_statement statements
						|func_call statements
						|switch_statement statements
						|
						;

func_call				:ID_TOK LPAREN_TOK{scope++;} param RPAREN_TOK{hashMapRemoveScope(map,scope);scope--;} 
						;

switch_statement		:SWITCH_TOK LPAREN_TOK ID_TOK RPAREN_TOK LCURLY_TOK case_statements RCURLY_TOK 
						 {
							if(!hashMapIsPresent(map,$3))
							{
								fprintf(yyout,"\n Variable %s is not declared \n",$3);
								exit(EXIT_FAILURE);
							}
							fprintf(yyout,"\nParsed a switch block at line no:- %d\n",yylineno);
						 }
						;

case_statements			:case_statement case_statements
						|case_statement
						;

case_statement			:CASE_TOK data COLON_TOK statements BREAK_TOK SEMI_COLON_TOK {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
						|DEFAULT_TOK COLON_TOK statements BREAK_TOK SEMI_COLON_TOK {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
						|CASE_TOK data COLON_TOK statements {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
						|DEFAULT_TOK COLON_TOK statements {fprintf(yyout,"\nParsed a case statement at line no:- %d\n",yylineno);}
						;

block_statements        :statement block_statements
                        |conditional_statement block_statements
                        |iterative_statement block_statements
                        |func_call block_statements
                        |switch_statement block_statements
                        |
                        ;

iterative_statement     :FOR_TOK LPAREN_TOK initialization SEMI_COLON_TOK 
                         conditional_expression SEMI_COLON_TOK initialization 
                         RPAREN_TOK block {
                            fprintf(yyout,"\nParsed a for loop at line no: %d\n",yylineno);
                        }
                        |WHILE_TOK LPAREN_TOK conditional_expression RPAREN_TOK 
                         block {
                            fprintf(yyout,"\nParsed a while loop at line no: %d\n",yylineno);
                        }
                        |DO_TOK block WHILE_TOK LPAREN_TOK conditional_expression 
                         RPAREN_TOK SEMI_COLON_TOK {
                            fprintf(yyout,"\nParsed a do-while loop at line no: %d\n",yylineno);
                        }
                        ;

conditional_statement   :IF_TOK LPAREN_TOK expression RPAREN_TOK block {
                            fprintf(yyout,"\nParsed an if statement at line no: %d\n",yylineno);
                        }
                        |IF_TOK LPAREN_TOK expression RPAREN_TOK block 
                         ELSE_TOK block {
                            fprintf(yyout,"\nParsed an if-else statement at line no: %d\n",yylineno);
                        }
                        |IF_TOK LPAREN_TOK expression RPAREN_TOK block 
                         ELSE_TOK conditional_statement {
                            fprintf(yyout,"\nParsed an else-if statement at line no: %d\n",yylineno);
                        }
                        ;

conditional_expression	:logical_expression
						|relational_expression
						|conditional_expression LOG_AND_TOK conditional_expression
						|conditional_expression LOG_OR_TOK conditional_expression
						|NOT_TOK conditional_expression
						;

ternary_expression		:conditional_expression QUESTION_MARK_TOK expression COLON_TOK expression {fprintf(yyout,"\nParsed a ternary expression at line no:- %d\n",yylineno);}
						;

statement               :declarations SEMI_COLON_TOK
                        |initializations SEMI_COLON_TOK
                        |SEMI_COLON_TOK
                        |enum_decl
                        |enum_init
                        |BREAK_TOK SEMI_COLON_TOK
                        |CONTINUE_TOK SEMI_COLON_TOK
                        ;

param					:data
						|AND_TOK ID_TOK
						|other_literal
						|ID_TOK LPAREN_TOK RPAREN_TOK
						|declaration
						|initialization
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

logical_expression		:data logical_operator data {fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
						|LPAREN_TOK logical_expression RPAREN_TOK{fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
						|NOT_TOK ID_TOK{fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
						|NOT_TOK LPAREN_TOK ID_TOK RPAREN_TOK{fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
						|LPAREN_TOK data RPAREN_TOK{fprintf(yyout,"\nParsed a logical expression at line no:- %d\n",yylineno);}
						;

arithmetic_expression	:data num_operator data{fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
						|LPAREN_TOK arithmetic_expression RPAREN_TOK{fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
						|data{fprintf(yyout,"\nParsed an arithmetic expression at line no:- %d\n",yylineno);}
						;


relational_expression	:data relational_operator data{fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
						|LPAREN_TOK relational_expression RPAREN_TOK{fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
						|LPAREN_TOK data RPAREN_TOK{fprintf(yyout,"\nParsed a relational expression at line no:- %d\n",yylineno);}
						;

data_t					:ID_TOK
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared in scope\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|datatype

data					:number_literal
						|ID_TOK
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared in scope\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|AND_TOK ID_TOK
						|SIZEOF_TOK LPAREN_TOK data_t RPAREN_TOK
						;

declarations 			:declaration declarations
						|declaration
						;

declaration             :storage_class datatype qualifier ID_TOK
                        |storage_class qualifier datatype ID_TOK
                        |qualifier datatype ID_TOK
                        |datatype qualifier ID_TOK
                        |COMMA_TOK ID_TOK
                        |datatype ID_TOK {
                            if(hashMapIsPresent(map, $2)) {
                                fprintf(yyout,"Variable %s is already declared\n", $2);
                                exit(EXIT_FAILURE);
                            } else {
                                hashMapInsert(map, scope, type, $2);
                                fprintf(yyout,"\nVariable %s of type %s with scope %d has been declared\n",
                                        $2, type, scope);
                            }
                        }
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
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK assignment_operator data 
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK assignment_operator LPAREN_TOK expression RPAREN_TOK
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK assignment_operator expression
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK PLUS_PLUS_TOK
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK MINUS_MINUS_TOK
						{
							if(!hashMapIsPresent(map,$1))
							{
								fprintf(yyout,"Variable %s is not declared\n",$1);
								exit(EXIT_FAILURE);
							}
						}
						|PLUS_PLUS_TOK ID_TOK
						{
							if(!hashMapIsPresent(map,$2))
							{
								fprintf(yyout,"Variable %s is not declared\n",$2);
								exit(EXIT_FAILURE);
							}
						}
						|MINUS_MINUS_TOK ID_TOK
						{
							if(!hashMapIsPresent(map,$2))
							{
								fprintf(yyout,"Variable %s is not declared\n",$2);
								exit(EXIT_FAILURE);
							}
						}
						|ID_TOK brackets
						;

datatype				:INT_TOK{strcpy(type,"int");}
						|FLOAT_TOK{strcpy(type,"float");}
						|DOUBLE_TOK{strcpy(type,"double");}
						|LONG_TOK{strcpy(type,"long");}
						|CHAR_TOK{strcpy(type,"char");}
						|SHORT_TOK{strcpy(type,"short");}
						|VOID_TOK{strcpy(type,"void");}
						|SIGNED_TOK INT_TOK{strcpy(type,"signed int");}
						|UNSIGNED_TOK INT_TOK{strcpy(type,"unsigned int");}
						|SIGNED_TOK CHAR_TOK{strcpy(type,"signed char");}
						|UNSIGNED_TOK CHAR_TOK{strcpy(type,"unsigned char");}
						|SIGNED_TOK SHORT_TOK{strcpy(type,"signed short");}
						|UNSIGNED_TOK SHORT_TOK{strcpy(type,"unsigned short");}
						|SIGNED_TOK LONG_TOK{strcpy(type,"signed long");}
						|UNSIGNED_TOK LONG_TOK{strcpy(type,"unsigned long");}
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
					

/* constants				:number_literal
						|other_literal
						; */

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


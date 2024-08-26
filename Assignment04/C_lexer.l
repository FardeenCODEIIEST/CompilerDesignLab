%{
#include <stdio.h>
#include "y.tab.h"

void yyerror(char*);

%}

%%
\+                                                  {return PLUS_TOK;}
\+\=                                                {return PLUS_EQUAL_TOK;}
\+\+                                                {return PLUS_PLUS_TOK;}
\=                                                  {return EQUAL_TOK;}
\=\=                                                {return EQUAL_EQUAL_TOK;}
\-                                                  {return MINUS_TOK;}
\-\=                                                {return MINUS_EQUAL_TOK;}
\-\-                                                {return MINUS_MINUS_TOK;}
\*                                                  {return MUL_TOK;}
\*\=                                                {return MUL_EQUAL_TOK;}
\/                                                  {return DIV_TOK;}
\/\=                                                {return DIV_EQUAL_TOK;}
\%                                                  {return MODULO_TOK;}
\%\=                                                {return MOD_EQUAL_TOK;}
\>                                                  {return GT_TOK;}
\>\=                                                {return GTE_TOK;}
\>\>                                                {return RIGHT_SHIFT_TOK;}
\<                                                  {return LT_TOK;}
\<\=                                                {return LTE_TOK;}
\<\<                                                {return LEFT_SHIFT_TOK;}
\|                                                  {return OR_TOK;}
\|\|                                                {return LOG_OR_TOK;}
\|\=                                                {return BIT_OR_EQUAL_TOK;}
\&                                                  {return AND_TOK;}
\&\&                                                {return LOG_AND_TOK;}
\&\=                                                {return BIT_AND_EQUAL_TOK;}
\^                                                  {return XOR_TOK;}
\^\=                                                {return XOR_EQUAL_TOK;}
\~                                                  {return BITWISE_NOT_TOK;}
\!                                                  {return NOT_TOK;}
\!\=                                                {return NOT_EQUAL_TOK;}
;                                                   {return SEMI_COLON_TOK;}
,                                                   {return COMMA_TOK;}
\{                                                  {return LCURLY_TOK;}
\}                                                  {return RCURLY_TOK;}
\(                                                  {return LPAREN_TOK;}
\)                                                  {return RPAREN_TOK;}
\[                                                  {return LBRACKET_TOK;}
\]                                                  {return RBRACKET_TOK;}
\.                                                  {return PERIOD_TOK;}
\\                                                  {return ESCAPE_NOTATION_TOK;}
\'[^\\]\'                                           {return CHAR_CONST_TOK;}
\?                                                  {return QUESTION_MARK_TOK;}
\:                                                  {return COLON_TOK;}
\'													{return SINGLE_INVERTED_COMMA;}
\'\'												{return DOUBLE_INVERTED_COMMA;}


auto                                                {return AUTO_TOK;}
const                                               {return CONST_TOK;}
double                                              {return DOUBLE_TOK;}
float                                               {return FLOAT_TOK;}
int                                                 {return INT_TOK;}
short                                               {return SHORT_TOK;}
struct                                              {return STRUCT_TOK;}
unsigned                                            {return UNSIGNED_TOK;}
break                                               {return BREAK_TOK;}
continue                                            {return CONTINUE_TOK;}
else                                                {return ELSE_TOK;}
for                                                 {return FOR_TOK;}
long                                                {return LONG_TOK;}
signed                                              {return SIGNED_TOK;}
switch                                              {return SWITCH_TOK;}
void                                                {return VOID_TOK;}
case                                                {return CASE_TOK;}
default                                             {return DEFAULT_TOK;}
enum                                                {return ENUM_TOK;}
goto                                                {return GOTO_TOK;}
register                                            {return REGISTER_TOK;}
sizeof                                              {return SIZEOF_TOK;}
typedef                                             {return TYPEDEF_TOK;}
volatile                                            {return VOLATILE_TOK;}
char                                                {return CHAR_TOK;}
do                                                  {return DO_TOK;}
extern                                              {return EXTERN_TOK;}
if                                                  {return IF_TOK;}
return                                              {return RETURN_TOK;}
static                                              {return STATIC_TOK;}
union                                               {return UNION_TOK;}
while                                               {return WHILE_TOK;}
main					            				{return MAIN_FUNC_TOK;}

([a-z]|[A-Z]|\_|\$)([a-z]|[A-Z]|[0-9]|\_|$)*        {return ID_TOK;}

\".*\"                                              {return STRING_LITERAL;}
(\+|\-)?[0-9]+                                      {return INTEGER_LITERAL;}
(\+|\-)?[0-9]*\.[0-9]+                              {return FLOAT_LITERAL;} 
(\+|\-)?[0-9]+(\.[0-9]+)?\e(\+|\-)?[0-9]+           {return EXP_LITERAL;}

\n                                                  {yylineno++;}
\t                                                  {}
#.*                                                 {yylineno++;}
\/\*[^*]*\*+(?:[^/*][^*]*\*+)*\/	            	{}
\/\/.*                                              {yylineno++;}

 /*[0-9]+[a-zA-z\_$]+									{
						    							yyerror("Identifier Name cannot start with a digit");
														return -1;
							   							}
*/

%%




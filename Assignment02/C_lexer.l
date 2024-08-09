%{
#include <stdio.h>
#include <stdlib.h>

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
#define COMMA_TOK ','
#define BITWISE_NOT_TOK '~'
#define PERIOD_TOK '.'
#define QUESTION_MARK_TOK '?'
#define SINGLE_INVERTED_COMMA '\''
#define ESCAPE_NOTATION_TOK '\\'
#define MODULO_TOK '%'

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

#define KEYWORD_OFFSET 279

#define CHAR_CONST_TOK 312

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


auto                                                {return KEYWORD_OFFSET;}
const                                               {return KEYWORD_OFFSET+1;}
double                                              {return KEYWORD_OFFSET+2;}
float                                               {return KEYWORD_OFFSET+3;}
int                                                 {return KEYWORD_OFFSET+4;}
short                                               {return KEYWORD_OFFSET+5;}
struct                                              {return KEYWORD_OFFSET+6;}
unsigned                                            {return KEYWORD_OFFSET+7;}
break                                               {return KEYWORD_OFFSET+8;}
continue                                            {return KEYWORD_OFFSET+9;}
else                                                {return KEYWORD_OFFSET+10;}
for                                                 {return KEYWORD_OFFSET+11;}
long                                                {return KEYWORD_OFFSET+12;}
signed                                              {return KEYWORD_OFFSET+13;}
switch                                              {return KEYWORD_OFFSET+14;}
void                                                {return KEYWORD_OFFSET+15;}
case                                                {return KEYWORD_OFFSET+16;}
default                                             {return KEYWORD_OFFSET+17;}
enum                                                {return KEYWORD_OFFSET+18;}
goto                                                {return KEYWORD_OFFSET+19;}
register                                            {return KEYWORD_OFFSET+20;}
sizeof                                              {return KEYWORD_OFFSET+21;}
typedef                                             {return KEYWORD_OFFSET+22;}
volatile                                            {return KEYWORD_OFFSET+23;}
char                                                {return KEYWORD_OFFSET+24;}
do                                                  {return KEYWORD_OFFSET+25;}
extern                                              {return KEYWORD_OFFSET+26;}
if                                                  {return KEYWORD_OFFSET+27;}
return                                              {return KEYWORD_OFFSET+28;}
static                                              {return KEYWORD_OFFSET+29;}
union                                               {return KEYWORD_OFFSET+30;}
while                                               {return KEYWORD_OFFSET+31;}

([a-z]|[A-Z]|\_|\$)([a-z]|[A-Z]|[0-9]|\_|$)*        {return ID_TOK;}

\".*\"                                              {return STRING_LITERAL;}
(\+|\-)?[0-9]+                                      {return INTEGER_LITERAL;}
(\+|\-)?[0-9]*\.[0-9]+                              {return FLOAT_LITERAL;} 
(\+|\-)?[0-9]+(\.[0-9]+)?\e(\+|\-)?[0-9]+           {return EXP_LITERAL;}


\n                                                  {}
\t                                                  {}
#.*                                                 {}
\/\*[^*]*\*+(?:[^/*][^*]*\*+)*\/	            {}
\/\/.*                                              {}


%%

int yywrap()
{
    return 1;
}

int main(int argc,char* argv[])
{
    if(argc!=3)
    {
        fprintf(stderr,"Usage:%s <input_source_code_file> <output_token_list_file>\n",argv[0]);
        exit(EXIT_FAILURE);
    }

    yyin = fopen(argv[1],"r");
    yyout = fopen(argv[2],"w");

    if(yyin==NULL||yyout==NULL)
    {
        fprintf(stderr,"fopen() error\n");
        exit(EXIT_FAILURE);
    }

    int token_id;
    fprintf(yyout, "%-50s %-50s\n", "LEXEME_NAME", "TOKEN_ID");
    while((token_id=yylex())>0)
    {
        fprintf(yyout, "%-50s %d\n", yytext, token_id);
    }

    fprintf(yyout,"LEXICAL ANALYSIS COMPLETED ....\n");

    return 0;
}

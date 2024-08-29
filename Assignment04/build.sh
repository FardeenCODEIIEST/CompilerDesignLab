yacc -d ./C_parser.y
flex --verbose ./C_lexer.l
gcc ./y.tab.c -ll -o ./C_parser
./C_parser hello_world.c ./results.txt
# rm lex.yy.c C_lexer

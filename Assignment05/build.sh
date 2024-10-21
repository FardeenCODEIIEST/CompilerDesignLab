yacc -d ./C_parser.y
flex --verbose ./C_lexer.l
gcc ./y.tab.c ./hashTable.c ./linkedList.c -ll -o ./C_parser
./C_parser hello_world.c ./results.txt
# rm y.tab.c y.tab.h lex.yy.c
# rm lex.yy.c C_lexer

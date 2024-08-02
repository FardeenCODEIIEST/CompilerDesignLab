flex --verbose ./C_lexer.l
cc lex.yy.c -o C_lexer
./C_lexer hello_world.c tokens.txt
# rm lex.yy.c C_lexer
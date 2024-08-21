#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

// Stack definition

stack *st;

/*
    @brief:-  Pushes an integer onto the stack
    @param:-  integer(tok)
    @return:- NIL
*/
void push(int tok)
{
    if (st->len == MAX_STACK_SIZE)
    {
        printf("Stack overflow!!!!\n");
        exit(EXIT_FAILURE);
    }
    st->arr[st->len] = tok;
    st->len++;
}

/*
    @brief:-  Pops an integer from the stack and returns it
    @param:-  NIL
    @return:- integer
*/
int pop()
{
    if (st->len == 0)
    {
        printf("Stack underflow!!!!\n");
        exit(EXIT_FAILURE);
    }
    int l = st->len;
    st->len--;
    return st->arr[l - 1];
}

/*
    @brief:-  Returns topmost element of the stack
    @param:-  NIL
    @return:- integer
*/
int top()
{
    return st->arr[st->len - 1];
}

/*
    @brief:-  Checks whether the stack is empty or not
    @param:-  NIL
    @return:- 0 if stack is not empty, else 1
*/
int empty()
{
    return st->len == 0;
}

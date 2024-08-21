#ifndef STACK_H
#define STACK_H
#define MAX_STACK_SIZE 30

typedef struct
{
    int arr[MAX_STACK_SIZE];
    int len;
} stack;

extern stack *st;

void push(int);
int pop();
int top();
int empty();

#endif
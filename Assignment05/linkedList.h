#ifndef MY_LL_H
#define MY_LL_H

#define LEX_SIZE 50 // Size of the lexeme

typedef struct node
{
    int var_scope;
    char var_name[LEX_SIZE];
    char var_type[LEX_SIZE];
    struct node *next;
} node;

node *createNode(int, char *, char *);
node *freeNode(node *);
node *insert(node *, int, char *, char *);
node *removeNode(node *, int);
node *isPresent(node *, char *);

#endif
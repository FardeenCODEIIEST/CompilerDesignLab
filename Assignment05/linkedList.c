// Linked List Implementation for hash lookup

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

/*
    @brief   -> Creates and returns a new node
    @param   -> (int var_scope,char* var_type,char* var_name)
    @return  -> node* new_node
*/

node *createNode(int var_scope, char *var_type, char *var_name)
{
    node *new_node = (node *)malloc(sizeof(node));

    new_node->var_scope = var_scope;

    strcpy(new_node->var_name, var_name);

    strcpy(new_node->var_type, var_type);

    new_node->next = NULL;

    return new_node;
}

/*
    @brief   -> Frees the node and return NULL pointer
    @param   -> (node* free_node)
    @return  -> NULL
*/

node *freeNode(node *free_node)
{
    free(free_node);

    return NULL;
}

/*
    @brief  -> Inserts a node at the beginning of the linked list
    @param  -> (node* head,int var_scope,char* var_type,char* var_name)
    @return -> node* head
*/

node *insert(node *head, int var_scope, char *var_type, char *var_name)
{
    node *new_node = createNode(var_scope, var_type, var_name);

    new_node->next = head;
    head = new_node;

    return head;
}

/*
    @brief  -> Removes a node
    @param  -> (node* head,int var_scope)
    @return -> node* head
*/

node *removeNode(node *head, int scope)
{
    if (head == NULL)
        return NULL;

    while (head && head->var_scope == scope)
    {
        node *temp = head;
        head = head->next;
        temp = freeNode(temp);
    }

    return head;
}

/*
    @brief  -> Checks for presence of a node by its var_name
    @param  -> (node* head,char* var_name)
    @return -> node if present else NULL
*/

node *isPresent(node *head, char *var_name)
{
    node *temp = head;
    while (temp)
    {
        if (strcmp(temp->var_name, var_name) == 0)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}
// Hash Table Implementation

#include "hashTable.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylineno;

/*
    @brief  -> Creates and returns a pointer to the hash map
    @param  -> Nil
    @return -> pointer to the created hash map
*/

hash_map *createHashMap()
{
    hash_map *map = (hash_map *)malloc(sizeof(hash_map) * HASH_SIZE);
    for (int i = 0; i < HASH_SIZE; i++)
    {
        map->table[i] = NULL;
    }
    return map;
}

/*
    @brief  -> Insert an element of type `node` in the hash map
    @param  -> (hash_map *map, int var_scope, char *var_type, char *var_name)
    @return -> Nil
*/

void hashMapInsert(hash_map *map, int var_scope, char *var_type, char *var_name)
{
    int hash_key = var_name[0] % HASH_SIZE;

    node *previousVar = isPresent(map->table[hash_key], var_name);

    if (previousVar == NULL || previousVar->var_scope != var_scope)
    {
        // new var
        map->table[hash_key] = insert(map->table[hash_key], var_scope, var_type, var_name);
    }
    else
    {
        // already present
        printf("Variable %s of type %s is previously defined at line no %d\n", previousVar->var_name, previousVar->var_type, yylineno);
        exit(EXIT_FAILURE);
    }
}

/*
    @brief  -> Removes nodes of given `scope` from the hash map
    @param  -> (hash_map *map, int scope)
    @return -> Nil
*/

void hashMapRemoveScope(hash_map *map, int scope)
{
    for (int i = 0; i < HASH_SIZE; i++)
    {
        map->table[i] = removeNode(map->table[i], scope);
    }
}

/*
    @brief  -> Returns whether the node with given `var_name` exists or not
    @param  -> (hash_map *map, char *var_name)
    @return -> Nil
*/

bool hashMapIsPresent(hash_map *map, char *var_name)
{
    int hash_key = var_name[0] % HASH_SIZE;

    return isPresent(map->table[hash_key], var_name) != NULL;
}

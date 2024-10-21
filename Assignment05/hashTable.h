#ifndef MY_HASH_HH
#include "linkedList.h"
#include <stdbool.h>
#define MY_HASH_HH
#define HASH_SIZE 100

typedef struct
{
    node *table[HASH_SIZE];
} hash_map;

hash_map *createHashMap();

void hashMapInsert(hash_map *, int, char *, char *);

void hashMapRemoveScope(hash_map *, int);

bool hashMapIsPresent(hash_map *, char *);

#endif
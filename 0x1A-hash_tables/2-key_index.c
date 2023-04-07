#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "hash_tables.h"

/**
 * key_index - function to get index of key
 *
 *@key: The key, string
 *@size: size of the array of the hash table
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int hash;
int c;

hash = 5381;
while (*key != '\0')
{
c = *key++;
hash = ((hash << 5) + hash) +c; /* hash * 33 + c */
}
return (hash % size);
}

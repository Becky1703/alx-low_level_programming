#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 *
 * @size: The size of the array
 *
 * Return: Always 0 Success.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table = NULL;
hash_node_t **array = NULL;
unsigned long int i = 0;
/* memory allocation for hash table structure */
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
{
return (NULL);
}
/* memory allocation for array of hash_node_t pointer */
array = malloc(size * sizeof(hash_node_t *));
if (array == NULL)
{
free(hash_table);
return (NULL);
}
/* initialiaze all element of the array to NULL */
for (i = 0; i < size; i++)
{
array[i] = NULL;
}
/* set hash_table size */
hash_table->size = size;
/* set array of hash_node_t pointer */
hash_table->array = array;
/* Return pointer to the new hash table */
return (hash_table);
}

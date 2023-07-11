#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches for a value in a sorted list of
 *              integers using jump search
 *
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: Always 0 Success.
 *         NULL if value is not present
 *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *go;

if (list == NULL)
return (NULL);

go = list;

do {
list = go;
go = go->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)go->index, go->n);
} while (go->express && go->n < value);

if (go->express == NULL)
{
list = go;
while (go->next)
go = go->next;
}
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)go->index);

while (list != go->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}
return (NULL);
}

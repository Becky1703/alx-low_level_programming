#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of
 *              integers using jump search
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in a list
 * @value: value to search for
 *
 * Return: Always 0 Success.
 *         NULL if value is not present
 *
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t index, k, m;
listint_t *prev;

if (list == NULL || size == 0)
return (NULL);
m = (size_t)sqrt((double)size);
index = 0;
k = 0;

do {
prev = list;
k++;
index = k *m;

while (list->next && list->index < index)
list = list->next;
if (list->next == NULL && index != list->index)
index = list->index;
printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
} while (index < size && list->next && list->n < value);
printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

for (; prev && prev->index <= list->index; prev = prev->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
if (prev->n == value)
return (prev);
}
return (NULL);
}

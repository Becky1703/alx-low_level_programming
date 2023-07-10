#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array to search in
 * @value: the value is the value to search for
 *
 * Return: Always 0 Success.
 *         -1 if value is not present in array
 *
 */
int linear_search(int *array, size_t size, int value)
{
int i;
if (array == NULL)
{
return (-1);
}

for (i = 0; i < (int)size; i++)
{
printf("Value checked array [%d] = [%d]\n", i, array[i]);

if (array[i] == value)
{
return (i);
}
}
return (-1);
}

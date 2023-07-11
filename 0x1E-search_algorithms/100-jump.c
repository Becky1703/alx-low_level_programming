#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array to search in
 * @value: the value is the value to search for
 *
 * Return: Always 0 Success.
 *         -1 if value is not present in array
 *
 */
int jump_search(int *array, size_t size, int value)
{
int i, blockSize, j, prev;
if (array == NULL || size == 0)
{
return (-1);
}
blockSize = (int)sqrt((double)size);
j = 0;
prev = i = 0;

do {
printf("Value checked array[%d] = [%d]\n", i, array[i]);

if (array[i] == value)
return (i);
j++;
prev = i;
i = j *blockSize;
} while (i < (int)size && array[i] < value);
printf("Value found between indexes [%d] and [%d]\n", prev, i);

for (; prev <= i && prev < (int)size; prev++)
{
printf("Value checked array [%d] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}
return (-1);
}

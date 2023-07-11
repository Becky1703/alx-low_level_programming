#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search_ex - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @left: left of the array to search in
 * @right: right of the array to search in
 * @value: the value is the value to search for
 *
 * Return: Always 0 Success.
 *         -1 if value is not present in array
 *
 */
int binary_search_ex(int *array, size_t left, size_t right, int value)
{
size_t i;
if (array == NULL)

return (-1);

while (right >= left)
{
printf("Searching in array: ");
for (i = left; i < right; i++)
printf("%d, ", array[i]);
printf("%d\n", array[i]);
i = left + (right - left) / 2;
if (array[i] == value)
return (i);

if (array[i] > value)
right = i - 1;
else
left = i + 1;
}
return (-1);
}

/**
 * exponential_search - function serches for value in a sorted array
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array.
 * @value: Value to search for
 *
 * Return: Always 0 Success.
 *         -1 if the value is not present.
 */
int exponential_search(int *array, size_t size, int value)
{
size_t i = 0, right;

if (array == NULL)
return (-1);
if (array[0] != value)
{
for (i = 1; i < size && array[i] <= value; i = i * 2)
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
right = i < size ? i : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
return (binary_search_ex(array, i / 2, right, value));
}

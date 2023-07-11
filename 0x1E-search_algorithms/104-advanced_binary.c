#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * repeat_search - searches using the binary algorithm searche
 *
 * @array: pointer to element of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: index of number
 */
int repeat_search(int *array, size_t size, int value)
{
size_t h = size / 2;
size_t i;

if (array == NULL || size == 0)
return (-1);

printf("Searching in array");

for (i = 0; i < size; i++)
printf("%s %d", (i == 0) ? ":" : ",", array[i]);
printf("\n");
if (h && size % 2 == 0)
h--;
if (value == array[h])
{
if (h > 0)
return (repeat_search(array, h + 1, value));
return ((int)h);
}
if (value < array[h])
return (repeat_search(array, h + 1, value));
h++;
return (repeat_search(array + h, size - h, value) + h);
}

/**
 * advanced_binary - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array to search in
 * @value: the value is the value to search for
 *
 * Return: Always 0 Success.
 *         -1 if value is not present in array
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
int i;

i = repeat_search(array, size, value);

if (i >= 0 && array[i] != value)
return (-1);
return (i);
}

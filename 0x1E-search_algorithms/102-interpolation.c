#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - function searches for a value in an array
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array to search in
 * @value: the value is the value to search for
 *
 * Return: Always 0 Success.
 *         -1 if value is not present in array
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t po, lo, hi;
double f;
if (array == NULL)
{
return (-1);
}

lo = 0;
hi = size - 1;
while (size)
{
f = (double)(hi - lo) / (array[hi] - array[lo]) * (value - array[lo]);
po = (size_t)(lo + f);
printf("Value checked array[%d]", (int)po);

if (po >= size)
{
printf(" is out of range\n");
break;
}
else
{
printf(" = [%d]\n", array[po]);
}
if (array[po] == value)
return ((int)po);
if (array[po] < value)
lo = po + 1;
else
hi = po - 1;
if (lo == hi)
break;
}
return (-1);
}

#include <stdio.h>

/**
 * main - Entry point
 * Description: print value of n; postive, negative or zero
 * Return: Always 0 (success)
 */
void positive_or_negative(int i)
{
if (i == 0)
{
printf("%d is zero\n", i);
}
else if (i > 0)
{
printf("%d is positive\n", i);
}
else
{
printf("%d is negative\n", i);
}
}

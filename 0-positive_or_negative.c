#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the value of variable n
 * Return : Always 0 (Success)
 */ 
int main(void)  
{
  int n;

srand(time(0));

n = rand() - RAND_MAX / 2;

if (n > 0 )
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else if (n < 0)
printf("%d is negative\n", n);
return (0);
  
}

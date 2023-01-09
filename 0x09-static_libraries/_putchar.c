#include "main.h"
#include <unistd.h>

/**
 * _putchar-writes the character c to stout
 *@c: the character to print
 *Return: return 1 on sucess
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

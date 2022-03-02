#include "main.h"
#include <stdio.h>
/**
 * print_rev -print string revers
 * @s:revers
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
int a = 0, length;
while (*s != '\0')
{
	s++;
	a++;
}
for (length = a - 1; length >= 0; length--)
{
	s--;
	putchar(*s);
}
	putchar('\n');
}

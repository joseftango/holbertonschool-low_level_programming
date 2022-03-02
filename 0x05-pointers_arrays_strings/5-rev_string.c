#include "main.h"
#include <stdio.h>
/**
 *rev_string- prints  a string
 * @s: input
 * Return: void
 */
void print_rev(char *s)
{
int a = 0, length;
while (*s != '\0')
{
	s++;
	a++;
}
for (length = a; length >= 0; length--)
{
	s--;
	putchar(*s);
}
	putchar('\n');
}

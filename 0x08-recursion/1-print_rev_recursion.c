#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev_recursion - print a string in reverse
 *@s: the string to reverse
 *
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if(*s == '\0')
	return;
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}

#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - writes the alphabets 10 times in a row
 * Return: On success void.
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	for (a = 0; a <= 9; a++)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	}

}




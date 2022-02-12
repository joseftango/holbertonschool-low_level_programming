#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the alphabe
 * Return: On success void.
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
	_putchar(x);
	}
	_putchar('\n');

}


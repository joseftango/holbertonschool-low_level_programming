#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - writes the alphabe
 * Return: On success void.
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
	_putchar (a);
	}
	_putchar ('\n');

}

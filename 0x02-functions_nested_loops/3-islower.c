#include <unistd.h>
#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: The character to print
 * Return: On success void.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}


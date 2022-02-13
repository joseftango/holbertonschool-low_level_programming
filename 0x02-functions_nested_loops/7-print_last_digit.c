#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: The character to print
 * Return: On success void.
 */
int print_last_digit(int n)
{
	if ((n % 10) < 0)
	{
	_putchar((-1 * (n % 10)) + '0');
	return (-1 * (n % 10));
	}
	else
	{
	_putchar((n % 10) + '0');
	return (n % 10);
	}
}

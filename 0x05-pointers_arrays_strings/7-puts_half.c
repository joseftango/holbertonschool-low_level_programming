#include "main.h"
/**
 *puts_half- prints  a string
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
int i, b;
for (i = 0; str[i] != '\0' ; i++)
{
}
b = (i + 1) / 2;
while (str[b] != '\0')
{
	_putchar(str[b]);
	b++;
}
	_putchar('\0');
}

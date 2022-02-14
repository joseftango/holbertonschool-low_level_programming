#include "main.h"
/**
 * puts2 - check the code
 *@str : pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != '\0'; a++)
	;
	for (b = 0; b <= a - 1; b += 2)
	{
	putchar(str[b]);
	}
	{
	putchar('\n');
	}

}

#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at given index
* @n: integer
* @index: the gien index form 0
* Return: integer
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1 << index;
	int check;

	if (index > 64)
		return (-1);

	check = *n |= mask;

	if (check)
		return (1);
	else
		return (-1);
}

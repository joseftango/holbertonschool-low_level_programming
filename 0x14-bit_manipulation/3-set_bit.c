#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at given index
* @n: integer
* @index: the gien index form 0
* Return: integer
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clearBit;
	unsigned int mask;

	if (index > 64)
		return (-1);

	clearBit = ~(1 << index);
	mask = *n & clearBit;

		*n = mask | (1 << index);

return (*n);
}

#include "main.h"
/**
* set_bit - sets the value of a bit to 1 at given index
* @n: integer
* @index: the gien index form 0
* Return: integer
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clearBit = ~(1 << index);
	unsigned int mask = *n & clearBit;

		*n = mask | (1 << index);

return (*n);
}

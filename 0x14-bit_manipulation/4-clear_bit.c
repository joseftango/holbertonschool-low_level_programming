#include "main.h"
/**
* clear_bit - function that sets a value of bit to 0 at given position
* @n: pointer to integer
* @index: index to set value of bit in 
* Return: 1 or -1
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	int clearBit, mask;

	if (index > 64)
		return (-1);

   clearBit= ~ (1<<index);
   mask= *n & clearBit;
   *n= mask |(0<<index);

	return (1);
}

#include "main.h"

/**
 *get_bit - returns the value of a bit at given index
 * @n: integer
 * @index: index starts from 0
 * Return: value of bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_status;

	if (index > 63)
		return (-1);

	bit_status = (n >> index) & 1;

		return (bit_status);

}

#include "main.h"
/**
* countSetBits - counts set bits
* @modified: result of two int n xor m
* Return: number of bits flipped
**/

int countSetBits(int modified)
{
	int count = 0;

	while (modified > 0)
	{
		count++;
		modified &= (modified - 1);
	}

	return (count);
}

/**
* flip_bits - counts number of bits flipped to get from a to b
* @n: integer
* @m: integer
* Return: number of flipped bits
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = countSetBits(n ^ m);

	return (res);
}

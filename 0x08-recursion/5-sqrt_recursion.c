#include "main.h"
#include <stdio.h>
/**
 * _sqrt - square root
 *@n : pointer
 *@a : pointer
 * Return: Always 0.
 */
int _sqrt(int n, int a)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	if (a * a > n)
		return (-1);
	else if (a * a == n)
		return (a);
	else
		return (_sqrt(n, a + 1));
}

/**
 * _sqrt_recursion - square root
 *@n : pointer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

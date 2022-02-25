#include <stdio.h>
#include "main.h"
/**
 * factorial - factor of
 *@n : integer
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);
else
return (n * factorial(n - 1));

}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all -  the sum of all its parameters
 *@n: input
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list total;
int sum = 0;
va_start(total, n);
if (n == 0)
{
return (0);
}
for (unsigned int x = 0; x < n; x++)
{
int a = va_arg(total, int);
sum = sum + a;
}
va_end(total);
return (sum);
}

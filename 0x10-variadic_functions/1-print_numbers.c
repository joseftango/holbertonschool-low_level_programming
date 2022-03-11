#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);

	for (j = 0; j < n; j++)

	{
	printf("%d", va_arg(list, int));
	if (separator != NULL && j != n - 1)
	printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}

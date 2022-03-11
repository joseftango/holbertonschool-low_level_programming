#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator : const char
 * @n : const unsigned integer
 * @...: the rest
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int j;

	va_start(a, n);

	for (j = 0; j < n; j++)

	{
	printf("%d", va_arg(a, int));
	if (separator != NULL && j != n - 1)
	printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}

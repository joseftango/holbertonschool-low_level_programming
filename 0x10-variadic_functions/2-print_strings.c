#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that prints strings
 * @n: number of arguments
 * @separator: separator string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(outputs);
va_start(outputs, n);

for (i = 0; i < n; i++)
{

if (separator == NULL)
{
printf("%s", va_arg(outputs, char*));
continue;
}

if (i == n - 1)
{
printf("%s\n", va_arg(outputs, char*));
break;
}

printf("%s%s", va_arg(outputs, char*), separator);

}

va_end(outputs);

}

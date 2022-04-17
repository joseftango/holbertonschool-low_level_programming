#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - function that prints a name
*@name: input
*@f: input
*Return: void
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}

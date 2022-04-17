#include <stdio.h>
#include "function_pointers.h"
/**
*void array_iterator - a function that executes a function given as argument
*@array: input
*@size: input
*@action: input
*Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

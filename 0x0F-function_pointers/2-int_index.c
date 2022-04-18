#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - function that searches for an integer
*@array: input
*@size: input
*@cmp: pointer to function
*Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int res;
int i;
if (array == NULL || (cmp == NULL || size <= 0))
return (-1);
for (i = 0; i < size; i++)
{
res = cmp(array[i]);
if (res == 98 || res > 0)
break;
}
return (i);
}

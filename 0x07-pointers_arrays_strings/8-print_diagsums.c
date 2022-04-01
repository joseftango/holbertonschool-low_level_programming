#include <stdio.h>
#include "main.h"
/**
 ** print_diagsums- a function that copies memory area
 * @a: input
 * @size: input
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i, j, first = 0, second = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
first = first + *a;

if (i + j == size - 1)
{
second = second + *a;
}
a++;
}

}

printf("%d, %d\n", first, second);

}


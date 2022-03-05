#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse integer
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int left = 0;
int right = n - 1;
int aqua;
while (left < right)
{
aqua = a[left];
a[left] = a[right];
a[right] = aqua;
left++;
right--;
}
}

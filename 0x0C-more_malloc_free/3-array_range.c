#include "main.h"
/**
*array_range - function that creates an array of integers
*@min: input
*@max: input
*Return: pointer to integer
*/
int *array_range(int min, int max)
{
int *p, i, j = 0, tsize = (max - min) + 1;
if (min > max)
return (NULL);
p = (int *) malloc(tsize * sizeof(int));
if (p == NULL)
return (NULL);
for (i = min; i <= max ; i++)
{
p[j] = i;
j++;
}
return (p);
}

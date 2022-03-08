#include <stdio.h>
#include "main.h"
/**
 * main - multiplication
 *@argc : integer
 *@argv : pointer of arrays
 * Return: Always 1.
 */
int main(int argc, char *argv[])
{
int x;
if (argc == 3)
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
x = a * b;
printf ("%d\n", x);
}
else
{
printf ("Error\n");
return (1);
}
return (0);
}

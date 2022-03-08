#include <stdio.h>
#include "main.h"
/**
 * main - multiplication
 *@argc : integer
 *@argv : pointer of arrays
 * Return: Always 1.
 */
int main(int argc, char  *argv[])
{
int x;
if (argc == 3)
{
x = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", x);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

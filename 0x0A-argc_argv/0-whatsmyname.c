#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *@argc: argument count
 *@argv: argument value
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n", argv[x]);
}
return (0);
}

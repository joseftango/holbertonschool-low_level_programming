#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 *@argc: argument count
 *@argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 1; i <= argc; i++)
{
if (i == argc)
{
        printf("argc=%d\n", i);
}
}
	argv = argv;
return (0);
}


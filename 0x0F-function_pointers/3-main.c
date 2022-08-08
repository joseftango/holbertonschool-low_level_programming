#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
*main - function that perform the correct operation
*@argv: string
*@argc: string
*Return: 0
**/

int main(int argc, char *argv[])
{
char *op = argv[2];

if (argc != 4)
{
printf("Error1\n");
exit(98);
}

if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}

if (strcmp(argv[3], "0") == 0 && ((strcmp(op, "/") == 0) || strcmp(op, "%") == 0))
{
printf("Error3\n");
exit(100);
}
else
{
int res;

res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

printf("%d\n", res);

}
return (0);
}

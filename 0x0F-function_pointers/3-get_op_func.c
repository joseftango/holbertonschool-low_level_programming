#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
*get_op_func - applicates the operation asked by the user.
*@s: input
*@int: input
*@int: input
*Return: pointer to function
**/

int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
int len = sizeof(ops) / sizeof(ops[0]);
i=0;

while (i < len)
{
if (strcmp(s, ops[i].op) == 0)
{
return (ops[i].f);  
}
i++;
}
return (NULL);
}

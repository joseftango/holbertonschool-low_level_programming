#include <stdio.h>
#include "3-calc.h"
/**
*op_add - function that add two integer
*@a: integer
*@b: integer
*return: the sum of two integer
**/
int op_add(int a, int b)
{
return (a + b);
}

/**
*op_sub - function that sub two integer
*@a: integer
*@b: integer
*return: the difference between two integer
**/
int op_sub(int a, int b)
{
return (a - b);
}

/**
*op_mul - function that mutiplicates two integer
*@a: integer
*@b: integer
*return: return the pruduction
**/
int op_mul(int a, int b)
{
return (a * b);
}

/**
*op_div - function that divide two integer
*@a: integer
*@b: integer
*return: the result of division
**/
int op_div(int a, int b)
{
return (a / b);
}

/**
*op_mod - function that remind the division of two integer
*@a: integer
*@b: integer
*return: the reminder of the division a by b
**/
int op_mod(int a, int b)
{
return (a % b);
}

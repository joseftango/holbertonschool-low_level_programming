#include <stdio.h>
#include "main.h"
/*
**is_prime_number-fuction that check if n is prime or not
**@: input
**return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, n - 1));
}
/**
** check_prime-a helper fuction
*@n: input
*@x: input
*return: 1 if n is prime, 0 otherwise
*/
int check_prime(int n, int x)
{
if (x == 1)
        return (1);
else if (n % x == 0 && x > 0)
        return (0);
return (check_prime(n, x - 1));
}

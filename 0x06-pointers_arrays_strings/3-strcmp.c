#include <stdio.h>
#include "main.h"
/**
* _strcmp - check the code
*@s1 : pointer
*@s2 : pointer
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2)
{
int a, b;
a = 0;
b = 0;
while (s1[a] != '\0' && b == 0)
{
b = s1[a] - s2[a];
a++;
}
return (b);
}

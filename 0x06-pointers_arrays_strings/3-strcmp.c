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
int i;
for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] == s2[i] || s1[i] != s2[i])
{
return (s1[i] - s2[i]);
break;
}
}
return (0);
}

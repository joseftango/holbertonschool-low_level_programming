#include "main.h"
#include <stdio.h>

/**
 * *cap_string - check the code
 *@s: pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i = 0;
int x;
char c[] = " (){};.!\t\n,?\"";
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
str[i] = str[i] - 32;
else
{
for (x = 0; x <= 12; x++)
{
if (c[x] == str[i - 1])
str[i] = str[i] - 32;
}
}
}
i++;
}
return (str);
}

#include "main.h"
#include <stdio.h>

/**
 * *cap_string - check the code
 *@s: pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
if (s[i - 1] == ' ' || s[i - 1] == '.')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
}
return (s);
}

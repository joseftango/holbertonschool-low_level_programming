#include <stdio.h>
#include "main.h"
/**
 **_strchr- a function that copies memory area
 * @s: input
 * @c: input
 * Return: void
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return (NULL);
}

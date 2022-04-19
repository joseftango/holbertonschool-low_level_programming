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
while (*s++)
{
if (*s == c)
return (s);
}
return (0);
}

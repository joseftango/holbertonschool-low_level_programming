#include <stdio.h>
#include "main.h"
/**
 **_strpbrk- a function that copies memory area
 * @s: input
 * @accept: input
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; *(s + 1) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
{
return (s + i);
}
}

}
return (NULL);
}

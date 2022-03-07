#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 **_memset - overwrite in data stractar
 *@s:array
 *@b:the new value
 *@n: numbar of repitation
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

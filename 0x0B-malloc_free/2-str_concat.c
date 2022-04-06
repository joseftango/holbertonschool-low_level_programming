#include "main.h"
#include <string.h>
/**
 * str_concat - create a concat string
 *@s1:string
 *@s2:string
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i, j;
int len1 = strlen(s1), len2 = strlen(s2);
int sum = len1 + len2;
s = malloc(sum * sizeof(char) + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < len1; i++)
{
*(s + i) = *(s1 + i);
}
for (j = 0; j < len2; j++)
{
*(s + i) = *(s2 + j);
i++;
}
return (s);
}

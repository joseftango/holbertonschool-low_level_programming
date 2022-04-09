#include "main.h"
/**
* string_nconcat - function that concatenates two string
* @s1 : input
* @s2 : input
* @n : input
* Return : concatenated string
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i, j, len1 = strlen(s1), len2 = strlen(s2);
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (n >= len2)
n = len2;
str = malloc(len1 + (n + 1));
if (str == NULL)
return (NULL);

for (i = 0; i < len1; i++)
{
str[i] = s1[i];
}
for (j = 0; j <= n; j++)
{
str[i + j] = s2[j];
if (j == n)
str[i + j] = '\0';
}
return (str);
}

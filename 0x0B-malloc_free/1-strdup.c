#include "main.h"
#include <string.h>
/**
 * *_strdup - returns pointer
 *@str : pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
int i, x;
char *str1;
x = strlen(str);
if (str == NULL)
return (NULL);
str1 = malloc(x *sizeof(char)+1);
if (str1 == NULL)
return (NULL);
for (i = 0; i < x; i++)
{
*(str1 + i) = *(str + i);
}
return (str1);
}

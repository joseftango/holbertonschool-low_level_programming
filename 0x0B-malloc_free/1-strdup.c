#include "main.h"
#include <string.h>
/**
** _strdup- function returns a pointer to a new string which is a duplicate of the string
*@str: input
*return: pointer
**/
char *_strdup(char *str)
{
int i, x;
char *str1;
x = strlen(str);
if (str == NULL)
return (NULL);
str1 = malloc(x *sizeof(char)+1);
for (i = 0; i < x; i++)
{
*(str1 + i) = *(str + i);
}
return (str1);
}

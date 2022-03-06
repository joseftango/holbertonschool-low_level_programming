#include "main.h"
#include <stdio.h>
/**
 *leet - check the code
 *@ch : pointer
 * Return: Always 0.
 */
char *leet(char *ch)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; ch[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (ch[i] == a[j])
{
ch[i] = b[j];
}
}
}
return (ch);
}

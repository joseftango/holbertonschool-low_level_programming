#include "main.h"
#include <stdio.h>
/**
 * *leet - converts into 1337
 *@a : pointer
 * Return: Always 0.
 */
char *leet(char *ch)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; ch[i] != '\0'; i++)
{
for (j = 0; a[j] < 10; j++)
{
if (ch[i] == a[j])
{
ch[i] = b[j];
}
}
}
return (ch);
}

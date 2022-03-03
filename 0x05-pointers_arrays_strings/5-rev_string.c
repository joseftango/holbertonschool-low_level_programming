#include "main.h"
#include <string.h>
/**
 * rev_string - reverse string
 *@s : pointer
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int j;
	int k;
	char a;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	for (k = j - 1; k >= j / 2; k--)
	{
	a = s[k];
	s[k] = s[j - k - 1];
	s[j - k - 1] = a;
	}
}


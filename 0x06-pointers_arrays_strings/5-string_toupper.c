#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *string_toupper- change lowercase to upercase
 *@a:pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0 ; a[i] != '\0' ;  i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}

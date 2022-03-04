#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 **_strncat - glue the number of character  in the first input
 *@dest:pointer
 *@src:pointer
 *@n: number of character of src
 *@n:number of array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (c = 0 ; dest[c] != '\0' ; c++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[c + i] += src[i];
	}
	dest[c + i] = '\0';
	return (dest);
}

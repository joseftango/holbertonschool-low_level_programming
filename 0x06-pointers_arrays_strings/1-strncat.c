#include <unistd.h>
#include "main.h"
#include <string.h>
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
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
	dest[i + j] += src[j];
}
	dest[i + j] += '\0';
	return (dest);
}

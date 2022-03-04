#include <unistd.h>
#include "main.h"

/**
 **_strncpy -src overwrite in dest
 *@dest:string pointer
 *@src:pointer
 *@n: nummber of chatracter
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0 ; c < n && src[c] != '\0' ; c++)
	{
		dest[c] = src[c];
	}
	for (; c < n ; c++)
	{
	dest[c] = '\0';
	}

	return (dest);
}

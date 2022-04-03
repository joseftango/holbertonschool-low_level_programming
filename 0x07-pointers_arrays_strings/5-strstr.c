#include "main.h"
#include <stdio.h>
#include <string.h>
/**
**_strstr- a function that locates a substring
*@haystack: input
*@needle: input
*Return: string
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
	if (strncmp(haystack, needle, strlen(needle)) == 0)
		return (haystack);
			haystack++;
}
return (NULL);
}

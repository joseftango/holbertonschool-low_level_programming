#include <string.h>
#include "main.h"
/**
 * puts2 - check the code
 *@str : pointer
 * Return: Always 0.
 */
void puts2(char *str)
{
int len = strlen(str);
for (int a = 0; a < len; a += 2)
{
	putchar(*str);
	str += 2;
}

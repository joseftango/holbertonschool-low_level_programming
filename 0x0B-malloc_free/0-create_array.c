#include "main.h"
/**
 * create_array - Creates an array of chars and
 *		initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array
 * Return: If size == 0 or the function fails - NULL.
 *		Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
    
if (size == 0)
return NULL;

ptr = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
   ptr[i] = c;
}
    return ptr;
}
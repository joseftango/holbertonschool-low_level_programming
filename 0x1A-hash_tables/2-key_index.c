#include "hash_tables.h"
/**
* key_index - function that gives you the index of a key
* @key: string
* @size: size of the array
* Return: the index
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
int index = 0;

index = hash_djb2(key) % size;

return (index);
}

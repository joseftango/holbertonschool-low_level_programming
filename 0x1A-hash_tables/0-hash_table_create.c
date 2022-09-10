#include "hash_tables.h"
/**
* hash_table_create - function that creates a hash table
* @size: size of array
* Return: pointer to the newly created hash table
**/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

ht = malloc(sizeof(hash_table_t));

if (ht == NULL || size == 0)
return (NULL);

ht->size = size;
ht->array = malloc(sizeof(hash_node_t *) * size);


return (ht);
}

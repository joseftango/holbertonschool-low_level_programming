#include "hash_tables.h"
/**
* hash_table_get - fuction that retrives value associated with the key
* @ht: hash table
* @key: key
* Return: value associated with the element
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *tmp;
char *value;
unsigned long int index = 0;

if ((ht == NULL || key == NULL) || ht->array == NULL)
return (NULL);

index = key_index((const unsigned char *) key, ht->size);

if (ht->array[index] == NULL)
return (NULL);

tmp = ht->array[index];

while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
value = strdup(tmp->value);
return (value);
}

tmp = tmp->next;
}

return (NULL);
}

#include "hash_tables.h"
/**
* hash_table_set - function that adds an element to the hash table
* @ht: hash table
* @key: string can't be empty
* @value: string can be empty
* Return: 1 if succeeded and 0 otherwise
**/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
int index = 0;
hash_node_t *tmp = NULL;
hash_node_t *new = malloc(sizeof(hash_node_t));

if ((ht == NULL || ht->array == NULL) || (new == NULL || key == NULL))
return (0);

index = key_index((const unsigned char *)key, ht->size);

tmp = ht->array[index];

while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
free(tmp->value);
tmp->value = strdup(value);
return (1);
}

tmp = tmp->next;
}


new->key = strdup(key);
new->value = strdup(value);

if (ht->array[index] != NULL)
ht->array[index]->next = new;


else
ht->array[index] = new;

return (1);
}

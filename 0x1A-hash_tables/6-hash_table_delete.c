#include "hash_tables.h"
/**
* hash_table_delete - function that deletes a hash table
* @ht: the hash table given
* Return: void
**/

void hash_table_delete(hash_table_t *ht)
{
unsigned int i = 0;
hash_node_t *tmp = NULL;
hash_node_t *del = NULL;

if (!ht && !ht->size)
return;

if (!(ht->array))
{
free(ht);
return;
}

while (i < ht->size)
{
tmp = ht->array[i];

while (tmp != NULL)
{

del = tmp;
tmp = tmp->next;
free(del->key);
free(del->value);
free(del);

}
i++;
}
free(ht->array);
free(ht);

}

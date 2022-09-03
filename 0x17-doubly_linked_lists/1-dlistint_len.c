#include "lists.h"
/**
* dlistint_len - function that counts number of elements in a list
* @h: pointer to astruct
* Return: number of nodes
**/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *node = h;
size_t count = 0;

while (node != NULL)
{
node = node->next;
count++;
}

return (count);
}

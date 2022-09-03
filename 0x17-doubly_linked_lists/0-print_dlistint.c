#include "lists.h"
/**
* print_dlistint - function that prints all elements of a list
* @h: pointer to astruct
* Return: number of nodes
**/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *node = h;
size_t count = 0;

while (node != NULL)
{
printf("%d\n", node->n);
node = node->next;
count++;
}

return (count);
}

#include "lists.h"
/**
 * print_listint -  prints all elements
 * @h : pointer
 * Return: nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	node++;
	}
	return (node);
}
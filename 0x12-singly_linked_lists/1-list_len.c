#include "lists.h"
/**
 * list_len - returns number of elements
 * @h : pointer
 * Return: nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
	h = h->next;
	node++;
	}
	return (node);
}
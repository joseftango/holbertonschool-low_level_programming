#include "lists.h"
/**
 * listint_len - returns number of elements
 * @h : pointer
 * Return: nodes
*/
size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h != NULL)
	{
	h = h->next;
	node++;
	}
	return (node);
}
#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - adding a new node at the end
 * @head : pointer to pointer
 * @n : integer
 * Return: new nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ppt = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (ppt->next != NULL)
	{
		ppt = ppt->next;
	};

	ppt->next = newnode;
	return (newnode);
}
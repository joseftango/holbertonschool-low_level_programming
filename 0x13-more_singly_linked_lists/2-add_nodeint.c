#include "lists.h"
/**
 * *add_nodeint - adding a new node
 * @head : pointer to pointer
 * @n : integer
 * Return: new nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
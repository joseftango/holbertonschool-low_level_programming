#include "lists.h"
/**
 * free_listint2 - free list
 * @head : pointer to pointer
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head)
	{
	while (*head)
	{
		a = *head;
		*head = (*head)->next;
		free(a);
	}
	}
}
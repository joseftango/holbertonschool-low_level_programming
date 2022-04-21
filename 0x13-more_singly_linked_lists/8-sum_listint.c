#include "lists.h"
/**
 * sum_listint - sum of the listint_t
 * @head : pointer
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int j  = 0;

	while (head)
	{
	j += head->n;
	head = head->next;
	}
	return (j);
}
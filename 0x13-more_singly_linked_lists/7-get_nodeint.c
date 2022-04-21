#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head : pointer
 * @index : unsigned integer
 * Return: head
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; head && index; index--)
	head = head->next;
	return (head);
}
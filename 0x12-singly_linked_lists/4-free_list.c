#include "lists.h"
/**
 * free_list - adding a new node
 * @head : pointer to pointer
 * Return: new nodes
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
	free(head->str);
	free(head);
	head = head->next;
	}
}
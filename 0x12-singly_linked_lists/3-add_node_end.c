#include "lists.h"
#include <stdlib.h>
/**
 * *add_node_end - adding a new node at the end
 * @head : pointer to pointer
 * @str : const char
 * Return: new nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ppt = *head;
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
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
#include "lists.h"
/**
 * *add_node - adding a new node
 * @head : pointer to pointer
 * @str : const char
 * Return: new nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;

	*head = newnode;
	return (newnode);
}
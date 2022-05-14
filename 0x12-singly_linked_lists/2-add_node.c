#include "lists.h"
/**
*add_node - function that adds a new node at the beginnig of a list
*@head: pointer to pointer to struct
*@str: pointer to string
*Return: new node created
**/
list_t *add_node(list_t **head, const char *str)
{
list_t *node;
node = (list_t *)malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
node->len = strlen(str);
node->next = *head;
*head = node;
return (node);
}

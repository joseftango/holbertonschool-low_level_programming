#include "lists.h"
/**
* add_nodeint - function that adds new node in the beginnig of a list
* @head: pointer to a struct
* @n: integer
* Return: address of the new node
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = *head;
*head = node;

return (node);
}

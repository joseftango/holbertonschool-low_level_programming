#include "lists.h"
/**
* add_dnodeint_end - function that adds a new node at the end of a list
* @head: double pointer to a struct
* @n: integer
* Return: address of the new node
**/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node = *head;
dlistint_t *new = malloc(sizeof(dlistint_t));

if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;
new->prev = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

else
{
while (node->next != NULL)
{
node = node->next;
}
node->next = new;
new->prev = node;
}

return (new);
}

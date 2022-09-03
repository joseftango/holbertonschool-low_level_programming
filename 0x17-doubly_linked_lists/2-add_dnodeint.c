#include "lists.h"
/**
* add_dnodeint - function that add a new node at the beginning
* @head: double pointer to a struct
* @n: integer
* Return: the address of the new elemen
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
new->next = *head;
(*head)->prev = new;
*head = new;
}

return (new);
}

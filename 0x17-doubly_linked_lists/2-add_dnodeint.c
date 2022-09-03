#include "lists.h"
/**
* add_dnodeint - function that add a new node at the beginning
* @head: double pointer to a struct
* @n: integer
* Return: the address of the new elemen
**/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *tmp = malloc(sizeof(dlistint_t));
if (tmp == NULL)
return (NULL);

tmp->n = n;
tmp->prev = NULL;
tmp->next = *head;
*head = tmp;

return (tmp);
}

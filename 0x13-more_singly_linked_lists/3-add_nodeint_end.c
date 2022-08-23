#include "lists.h"
/**
* add_nodeint_end - function that adds new node in the end of a list
* @head: pointer to a struct
* @n: integer
* Return: address of the new element
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

current = *head;

while (current->next != NULL)
{
current = current->next;
}
current->next = new;

return (new);
}

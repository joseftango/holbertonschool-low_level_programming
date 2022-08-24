#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: double pointer to a struct
* @idx: integer
* @n: integer
* Return: address of the new node
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *new;

current = *head;
new = malloc(sizeof(listint_t));
if (new == NULL || *head == NULL)
return (NULL);
new->n = n;
new->next = NULL;

while (idx != 1)
{
if (current == NULL)
return (NULL);
current = current->next;
idx--;
}
new->next = current->next;
current->next = new;
return (new);
}

#include "lists.h"
/**
* insert_dnodeint_at_index - function that adds a node at a given position
* @h: double pointer to a struct
* @idx: the given position
* @n: integer
* Return: address of the new node
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 1;
dlistint_t *current2 = NULL;
dlistint_t *current = *h;
dlistint_t *new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->next = NULL;
new->n = n;
new->prev = NULL;

while (count < idx)
{
if (current == NULL)
return (NULL);

current = current->next;
count++;
}

if (current->next == NULL)
{
current->next = new;
new->prev = current;
}

else
{
current2 = current->next;
current->next = new;
current2->prev = new;
new->prev = current;
new->next = current2;
}

return (new);
}

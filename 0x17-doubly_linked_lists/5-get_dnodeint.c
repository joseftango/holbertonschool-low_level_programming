#include "lists.h"
/**
* get_dnodeint_at_index - function that gets the nth node of a list
* @head: pointer to a struct
* @index: integer
* Return: nth node of a list
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;

if (current == NULL)
return (NULL);

while (index >= 1)
{
current = current->next;
index--;
}

return (current);
}

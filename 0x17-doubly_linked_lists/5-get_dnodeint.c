#include "lists.h"
/**
* get_dnodeint_at_index - function that gets the nth node of a list
* @head: pointer to a struct
* @index: integer
* return: nth node of a list
**/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;

while (index >= 1)
{
current = current->next;
index--;
}

return (current);
}

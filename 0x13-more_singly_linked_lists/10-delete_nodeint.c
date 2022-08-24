#include "lists.h"
/**
* delete_nodeint_at_index - function that deletes the node at index of a list
* @head: double pointer to a struct
* @index: integer
* Return: 1
**/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current;
listint_t *pre;
current = *head;

if (head == NULL || *head == NULL)
return (-1);

else if (index == 0)
{
*head = current->next;
free(current);
return (1);
}

else
{
while (index != 0)
{
pre = current;
current = current->next;
index--;
}
pre->next = current->next;
free(current);
}
return (1);
}

#include "lists.h"
/**
* get_nodeint_at_index - function that gets thr nth node of a list
* @head: pointer to a struct
* @index: integer
* Return: the nth node
**/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;
if (head == NULL)
return (NULL);

while (current->next != NULL)
{
if (count == index)
break;
count++;
current = current->next;
}
return (current);
}

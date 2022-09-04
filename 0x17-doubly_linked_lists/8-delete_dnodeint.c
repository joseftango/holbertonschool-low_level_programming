#include "lists.h"
/**
* delete_dnodeint_at_index - function that delete a node in specific index
* @head: double pointer to a struct
* @index: integer
* Return: 1 or 0
**/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int len = 0;
unsigned int count = 0;
dlistint_t *node = *head;

len = dlistint_t_len(*head);

if (len == 0 || index > len)
return (-1);

if (index == 0)
{
*head = (*head)->next;
(*head)->prev = NULL;
free(node);

return (1);
}

if (index < len - 1)
{
while (count < index)
{
node = node->next;
count++;
}

node->prev->next = node->next;
node->next->prev = node->prev;
free(node);

return (1);
}

if (index == len - 1)
{
while (node->next != NULL)
{
node = node->next;
}
node->next->prev = NULL;
node->prev = NULL;
free(node);

return (1);
}

return (-1);
}


/**
* dlistint_t_len - function that count the number of nodes in a list
* @h: pointer to a struct
* Return: number of nodes
**/

int dlistint_t_len(dlistint_t *h)
{
int count = 0;
dlistint_t *tmp = h;

if (tmp == NULL)
return (0);

while (tmp != NULL)
{
tmp = tmp->next;
count++;
}
return (count);
}

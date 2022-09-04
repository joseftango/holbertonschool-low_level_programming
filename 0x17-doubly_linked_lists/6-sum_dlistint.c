#include "lists.h"
/**
* sum_dlistint - function that counts the sum of all data n of a list
* @head: pointer to astruct
* Return: sum of all data n
**/

int sum_dlistint(dlistint_t *head)
{
dlistint_t *node = head;
int sum = 0;

if (node == NULL)
return (0);

while (node != NULL)
{
sum += node->n;
node = node->next;
}

return (sum);
}

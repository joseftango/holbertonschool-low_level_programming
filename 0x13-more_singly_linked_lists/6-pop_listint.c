#include "lists.h"
/**
* pop_listint - function that deletes the head node of a list
* @head: double pointer to a function
* Return: nth
**/
int pop_listint(listint_t **head)
{
int n = 0;
listint_t *current = *head;

if (*head == NULL)
return (0);

*head = (*head)->next;
n = current->n;
free(current);

return (n);
}

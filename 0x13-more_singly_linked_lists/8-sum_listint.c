#include "lists.h"
/**
* sum_listint - function that calculate the sum of all data n of a list
* @head: pointer to a struct
* Return: the sum of all n
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *h_rep;

if (head == NULL)
return (0);

h_rep = head;
while (h_rep != NULL)
{
sum += h_rep->n;
h_rep = h_rep->next;
}
return (sum);
}

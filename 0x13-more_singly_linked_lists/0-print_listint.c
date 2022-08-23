#include "lists.h"
/**
* print_listint - function that print all elements of a list
* @h: pointer to a struct
* Return: the number of elements
**/

size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *tmp = h;

while (tmp != NULL)
{
printf("%d\n", tmp->n);
count++;
tmp = tmp->next;
}
return (count);
}

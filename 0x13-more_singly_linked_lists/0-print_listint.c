#include "lists.h"
/**
*print_listint - function that print all element of a list
*@h: pointer to a struct
*Return: number of nodes in list
**/
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *ptr;
ptr = h;

while (ptr != NULL)
{
printf("%d\n", ptr->n);
count++;
ptr = ptr->next;
}
return (count);
}

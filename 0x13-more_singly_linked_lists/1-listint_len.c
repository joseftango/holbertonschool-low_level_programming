#include "lists.h"
/**
* listint_len - function that count the number of elements in a list
* @h: pointer to a struct
* Return: number of elements
**/

size_t listint_len(const listint_t *h)
{
size_t count = 0;
const listint_t *tmp = h;

while (tmp != NULL)
{
tmp = tmp->next;
count++;
}
return (count);
}

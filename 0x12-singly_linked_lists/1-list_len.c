#include "lists.h"
/**
*list_len - function that count the number of nodes in a linked list
*@h: pointer to struct
*Return: number of nodes
**/
size_t list_len(const list_t *h)
{
const list_t *ptr;
int count = 0;
ptr = h;
while (ptr != NULL)
{
ptr = ptr->next;
count++;
}
return (count);
}

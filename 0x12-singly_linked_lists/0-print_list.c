#include "lists.h"
/**
*print_list - function that print all element of every node
*@h: pointer to a struct
*Return: number of nodes
**/

size_t print_list(const list_t *h)
{
int count = 0;
const list_t *ptr;
ptr = h;
while (ptr != 0)
{
count++;
if (ptr->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", ptr->len, ptr->str);
ptr = ptr->next;
}
return (count);
}

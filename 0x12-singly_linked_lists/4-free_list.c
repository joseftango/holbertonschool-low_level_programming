#include "lists.h"
/**
* free_list - function that free a list
* @head: pointer to a struct
* Return: void
**/
void free_list(list_t *head)
{

while (head != NULL)
{
free(head->str);
free(head);
head = head->next;
}
}

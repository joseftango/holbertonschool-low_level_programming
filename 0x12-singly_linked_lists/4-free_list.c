#include "lists.h"
/**
* free_list - function that free a list
* @head: pointer to a struct
* Return: void
**/
void free_list(list_t *head)
{
list_t *current = head;

while (current->next != NULL)
{
current = current->next;
free(head->str);
free(head);
head = current;
}
}

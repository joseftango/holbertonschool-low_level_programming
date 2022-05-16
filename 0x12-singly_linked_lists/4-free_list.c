#include "lists.h"
/**
*free_list - function that free a linked list
*@head: pointer to a struct
*Return: void
**/
void free_list(list_t *head)
{
list_t *current;
while(head->next != NULL)
{
current = head;
head = head->next;
free(current->str);
free(current->next);
}
current = head;
free(current->str);
free(current->next);
}

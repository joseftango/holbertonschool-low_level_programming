#include "lists.h"
/**
* free_listint - function that free a list
* @head: pointer to a struct
* Return: void
**/
void free_listint(listint_t *head)
{
listint_t *current = head;

while(current != NULL)
{
current = current->next;
free(head);
head = current;
}

}

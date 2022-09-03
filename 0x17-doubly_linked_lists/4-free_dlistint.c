#include "lists.h"
/**
* free_dlistint - function that frees a list
* @head: pointer to a struct
* Return: void
**/

void free_dlistint(dlistint_t *head)
{

while (head != NULL)
{
head = head->next;
free(head->prev);
head->prev = NULL;
}

}

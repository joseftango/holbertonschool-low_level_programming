#include "lists.h"
/**
* free_listint2 - function that free a list
* @head: double pointer to a struct
* Return: void
**/
void free_listint2(listint_t **head)
{
if (head != NULL)
{
listint_t *tmp = *head;
while (tmp != NULL)
{
tmp = tmp->next;
free(*head);
*head = tmp;
}
}

}

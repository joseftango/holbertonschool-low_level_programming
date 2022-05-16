#include "lists.h"
/**
*add_node_end - fuction that add new node at the end of of alist
*@head: pointer to pointer to a struct
*@str: pointer to string
*Return: new node created
**/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
list_t *last;

node = (list_t *)malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
node->str = strdup(str);
node->len = strlen(str);
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (node);
}

last = *head;
while(last->next != NULL)
{
last = last->next;
}
last->next = node;
return(node);
}

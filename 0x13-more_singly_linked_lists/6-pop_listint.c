#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 * Return: head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int num;

if (*head == NULL)
return (0);

tmp = (*(*head)).next;
num = (*(*head)).n;
free(*head);
*head = tmp;

return (num);
}

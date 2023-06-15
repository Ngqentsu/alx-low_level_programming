#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees a linked dlistint list
 * @head: dlistint_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
dlistint_t *next;
 
while (tmp != NULL)
{
next = (*head).next;
free(head);
head = next;
}
}

#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: dlistint_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (tmp != NULL)
{
tmp = (*head).next;
free(head);
head = tmp;
}
}

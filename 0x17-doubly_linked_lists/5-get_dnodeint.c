#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: first node in the dlistint_t list
 * @index: index of the node
 * Return: nth node of a dlistint_t list or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);
head = (*head).next;
}
return (head);
}

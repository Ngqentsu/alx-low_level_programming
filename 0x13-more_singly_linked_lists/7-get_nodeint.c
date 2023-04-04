#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 * Return: nth node of a linked list or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

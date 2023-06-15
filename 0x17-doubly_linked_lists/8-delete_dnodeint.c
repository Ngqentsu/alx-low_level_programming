#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a dlistint_t list at index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *prev;
dlistint_t *cpnode = *head;
unsigned int i = 0;

if (cpnode == NULL)
return (-1);

if (index == 0)
{
*head = (*cpnode).next;

if (cpnode->next != NULL)
cpnode->next->prev = NULL;
free(cpnode);
return (1);
}

for (i = 0; i < index; i++)
{

prev = cpnode;
cpnode = (*cpnode).next;

if ((*cpnode).next == NULL)
return (-1);
}

prev->next = cpnode->next;

if (cpnode->next != NULL)
cpnode->next->prev = prev;
free(cpnode);

return (1);
}

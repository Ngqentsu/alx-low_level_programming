#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a dlistint_t list at index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp;
dlistint_t *cpnode = *head;
unsigned int i = 0;

if (cpnode == NULL)
return (-1);

if (index == 0)
{
*head = (*(*head)).next;
free(cpnode);
return (1);
}

for (i = 0; i < index - 1; i++)
{
if ((*cpnode).next == NULL)
return (-1);
cpnode = cpnode->next;
}

tmp = (*cpnode).next;
(*cpnode).next = tmp->next;
free(tmp);

return (1);
}

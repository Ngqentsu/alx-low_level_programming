#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp;
listint_t *cpnode = *head;
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

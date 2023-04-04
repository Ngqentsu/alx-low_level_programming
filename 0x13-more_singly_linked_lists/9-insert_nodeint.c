#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: integer for the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp = *head;
unsigned int i;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

(*new).n = n;
(*new).next = NULL;

if (idx == 0)
{
(*new).next = *head;
*head = new;
return (new);
}

for (i = 0; i < (idx - 1); i++)
{
if (tmp == NULL || (*tmp).next == NULL)
return (NULL);
tmp = (*tmp).next;
}
new->next = tmp->next;
tmp->next = new;
return (new);
}

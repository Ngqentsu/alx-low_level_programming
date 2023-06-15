#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: integer for the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
dlistint_t *new, *tmp = *head;
unsigned int i;

new = malloc(sizeof(dlistint_t));
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
if (tmp == NULL)
return (NULL);

tmp = (*tmp).next;
if (tmp == NULL)
return (NULL);
}

new->next = tmp->next;
tmp->next = new;
return (new);
}

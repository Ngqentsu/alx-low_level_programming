#include "lists.h"

/**
 * *insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the first node in the list
 * @idx: index where the new node should be added
 * @n: integer for the new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *tmp = *h;
unsigned int i;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

(*new).n = n;
(*new).next = NULL;

if (idx == 0)
{
(*new).next = *h;
*h = new;
return (new);
}

for (i = 0; i < (idx - 1); i++)
{
if (tmp == NULL)
{
free(new);
return (NULL);
}
tmp = (*tmp).next;
}

if (tmp == NULL)
{
free(new);
return (NULL);
}

new->next = tmp->next;
tmp->next = new;
return (new);
}

#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t nodes = 0;
listint_t *tmp;
int dif;

if (h == NULL || (*h)->next == NULL)
return (0);

while (*h)
{
dif = *h - (*h)->next;
if (dif > 0)
{
tmp = (*(*h)).next;
free(*h);
*h = tmp;
nodes++;
}
else
{
free(*h);
*h = NULL;
nodes++;
break;
}
}
*h = NULL;
return (nodes);
}

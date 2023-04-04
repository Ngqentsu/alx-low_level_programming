#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
size_t i, nodes = 0;
listint_t *tmp;

if (nodes == 0)
{
for (; h != NULL && *h != NULL; nodes++)
{
tmp = (*(*h)).next;
free(*h);
*h = tmp;
}
}
else
{
for (i = 0; i < nodes ; i++)
{
tmp = (*(*h)).next;
free(*h);
*h = tmp;
}
*h = NULL;
}
*h = NULL;
return (nodes);
}

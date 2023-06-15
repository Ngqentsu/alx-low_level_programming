#include <stdlib.h>
#include "lists.h"

/**
 * add_dnode_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the list_t list
 * @n: value to be assigned
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *temp = *head;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

(*new).n = n;
(*new).next= NULL;

if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next)
temp = (*temp).next;

temp->next = new;

return (new);
}

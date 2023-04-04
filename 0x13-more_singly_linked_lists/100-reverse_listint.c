#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *trailing;
listint_t *leading;

if (head == NULL || *head == NULL)
return (NULL);

trailing = NULL;

while ((*(*head)).next != NULL)
{
leading = (*(*head)).next;
(*(*head)).next = trailing;
trailing = *head;
*head = leading;
}
(*(*head)).next = trailing;

return (*head);
}

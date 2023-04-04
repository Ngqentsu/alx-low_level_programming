#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *trailing = NULL;
listint_t *leading = NULL;

while (*head)
{
leading = (*(*head)).next;
(*(*head)).next = trailing;
trailing = *head;
*head = leading;
}
(*(*head)).next = trailing;

return (*head);
}

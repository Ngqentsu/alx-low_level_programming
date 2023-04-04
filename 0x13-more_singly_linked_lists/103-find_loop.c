#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *skyhawk = head, *raptor = head;

if (head == NULL || (*head).next == NULL)
return (NULL);

while (skyhawk && raptor && raptor->next)
{
raptor = raptor->next->next;
skyhawk = (*skyhawk).next;
if (raptor == skyhawk)
{
skyhawk = head;
while (skyhawk != raptor)
{
skyhawk = (*skyhawk).next;
raptor = (*raptor).next;
}
return (raptor);
}
}
return (NULL);
}

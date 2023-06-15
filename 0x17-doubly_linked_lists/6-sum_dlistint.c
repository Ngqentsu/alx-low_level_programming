#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a dlistint_t list
 * @head: first node in the dlistint_t list
 * Return: sum of all the data in  a dlistint_t list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while (head)
{
sum += (*head).n;
head = (*head).next;
}
return (sum);
}

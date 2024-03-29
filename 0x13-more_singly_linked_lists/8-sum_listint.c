#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += (*head).n;
head = (*head).next;
}
return (sum);
}

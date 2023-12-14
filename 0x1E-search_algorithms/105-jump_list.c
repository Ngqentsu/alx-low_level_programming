#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list
 *             of integers using jump search.
 * @list: A pointer to the head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t i, jump, step;
    listint_t *current, *prev;

    if (list == NULL || size == 0)
        return (NULL);

    step = sqrt(size);
    current = list;
    prev = NULL;

    while (current != NULL && current->n < value)
    {
        prev = current;
        jump = 0;
        for (i = 0; i < step && current->next != NULL && current->next->n < value; i++)
        {
            current = current->next;
            jump++;
        }
        printf("Value checked at index [%lu] = [%d]\n", jump, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    while (prev != NULL && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}

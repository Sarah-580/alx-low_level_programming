#include "lists.h"

/**
 * sum_listint - returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of the linked list
 * Return: sum of all data (n) of the linked list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current = current->next;
	}

	return (sum);
}


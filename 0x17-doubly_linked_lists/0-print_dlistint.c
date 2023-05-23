#include "lists.h"

/**
 * print_dlistint - prints the elements in the doubly link list
 * @h: head of double linked list
 * Return: number of elements inside the doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n",  h->n);
		h = h->next;
		count++;
	}

	return count;
}

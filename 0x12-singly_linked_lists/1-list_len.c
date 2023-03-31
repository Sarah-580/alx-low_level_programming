#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * list_len - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

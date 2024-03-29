#include <stdlib.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _ra - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}


/**
 * free_listint_safe - frees a listint_t list
 * @h: a pointer to a pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	*h = NULL; /* set the head to NULL */

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		count++;

		if (temp >= current)
			break;

		current = temp;
	}

	return (count);
}

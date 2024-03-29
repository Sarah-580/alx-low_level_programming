#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the pointer to the head node of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}

#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head of the dlistint_t linked list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *previous_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;
	previous_node = NULL;

	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
		if (current_node == NULL)
			return (-1);
	}

	previous_node->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = previous_node;
	free(current_node);

	return (1);
}

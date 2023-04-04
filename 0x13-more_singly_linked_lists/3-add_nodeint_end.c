#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head node of the list
 * @n: integer to store in the new node
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (!*head)
		*head = newNode;
	else
	{
		current = *head;

		while (current->next)
			current = current->next;
		current->next = newNode;
	}
	return (newNode);
}

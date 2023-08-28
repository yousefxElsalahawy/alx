#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: the first node
 *
 * Return: success
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}

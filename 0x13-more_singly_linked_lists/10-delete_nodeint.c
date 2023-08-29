#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i;
	listint_t *next;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(*head);
		return (1);
	}
	current = *head;
	i = 0;
	while (current)
	{
		if (i < index - 1)
		{
			current = current->next;
			i++;
		}
		else
		{
			next = current->next;
			current->next = next->next;
			free(current);
			return (1);
		}
	}
	return (-1);
}

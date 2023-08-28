#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h:pointer for node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		x++;
	}
	printf("\n");
	return (x);


}

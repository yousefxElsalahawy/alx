#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->n;
		x++;
	}
	printf("\n");
	
	return (n);


}

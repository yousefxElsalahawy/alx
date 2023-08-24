#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	while (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%ld] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		i++;
		h = h->next;
	}
	return (i);

}


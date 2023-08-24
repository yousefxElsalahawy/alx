#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 *
 * _strlen - return the lenght of string
 *@s: string 
 * Return : the length of string
 */

int _strlen(char *s)
{
	while (*s != '\0')
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 * print_list - singly linked list
 * @h: node
 *
 * Return : the number of node
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


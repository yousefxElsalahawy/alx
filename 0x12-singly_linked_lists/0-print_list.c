#include "lists.h"
#include <stdio.h>

/**
 * strlen - return the lenght of string
 *@s: string 
 *
 * Return : the length of string
 */

int strlen (char *s)
{
	while(*s)
		return (1 + strlen(s + 1));
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
	if (h)
	{
		printf("[%d] %s\n" , strlen(h->str), h->str ? h->str : "(nil)")
		i++;
		h = h->next;
	}
	return (i);

}


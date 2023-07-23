#include "main.h"
/**
 * main - check the code
 * @s: _print_rev_recursion-Colton Walker
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

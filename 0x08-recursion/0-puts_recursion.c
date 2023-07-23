#include "main.h"
/**
 *_puts_recursion Puts with recursion
 *@s: input
 *
 *Return: Always 0(Success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

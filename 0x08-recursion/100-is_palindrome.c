#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (s[0] != s[strlen(s) - 1])
		return (0);
	return (is_palindrome(s + 1));
}

#include "main.h"
/**
 * main - check the code
 * @s1: the first variable
 * @s2: the second variable
 *
 * Return: Always 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}

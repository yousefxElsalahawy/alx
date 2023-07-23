#include "main.h"
/**
 * main - check the code
 * @
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (_sqrt_recursion(n / 2) + (n % 2 == 0 ? 0 : 1));
}

#include "main.h"
/**
 * main - check the code
 * @s: function that returns the factorial of a given number.
 *
 * Return: Always 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	esle if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

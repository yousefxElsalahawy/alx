#include "main.h"
/**
 * main - check the code
 * @x: the base
 * @y: power
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(y - 1));
	}
}

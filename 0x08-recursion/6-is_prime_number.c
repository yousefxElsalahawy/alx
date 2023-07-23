#include "main.h"
/**
 * main - check the code
 * @n: the number
 * @i: number will divide on it
 * Return: Always 0.
 */
int is_prime_helper(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (is_prime_helper(n, i + 1));
}

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

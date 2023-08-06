#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 *
 * return: void
 */
void print_most_numbers(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		if (i != '2' || i != '4')
			putchar(i);
	}
	putchar('\n');
}

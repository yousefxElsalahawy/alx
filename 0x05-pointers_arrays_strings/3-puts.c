#include "main.h"

void _puts(char *str)
{
	while (*str)
	{
		puts(*str);
		str++;
	}
	putchar('\n');
}

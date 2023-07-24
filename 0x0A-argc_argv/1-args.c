#include <stdio.h>
#include "main.h"
/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0
 */
int main(int argc, int *argv[])
{
	(void)argc;
	printf("%d\n", argv[0]);
	return (0);
}

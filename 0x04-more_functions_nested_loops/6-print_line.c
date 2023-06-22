#include "main.h"

/**
 * print_line - A program to check execute number 6 code
 * @n: number of repetition
 * Return: void
 */
void print_line(int n)

{

	int m;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (m = 0; m < n; m++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}

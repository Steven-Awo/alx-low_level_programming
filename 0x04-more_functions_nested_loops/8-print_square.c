#include "main.h"

/**
 * print_square - A program that test code
 * @size: The size function
 * Return: 0 (successful)
 */

void print_square(int size)

{
	int a, b;

	if (size < 0)
	{
	_putchar('\n');
	}
	else if (size == 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}

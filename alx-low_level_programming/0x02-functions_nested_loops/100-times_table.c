#include "main.h"

/**
 * print_times_table - A program that prints the times table of input
 * begining with 0.
 *@n: The number to create its times
 *Return: last digit (Success)
 */

void print_times_table(int n)

{
	int numb, multi, result;

	if (n >= 0 && n <= 15)
	{
	for (numb = 0; numb <= n; numb++)
	{
	_putchar('0');
	for (multi = 1; multi <= n; multi++)
	{
	_putchar(',');
	_putchar(' ');
	result = numb * multi;
	if (result <= 99)
	_putchar(' ');
	if (result <= 9)
	_putchar(' ');
	if (result >= 100)
	{
	_putchar((result / 100) + '0');
	_putchar(((result / 10)) % 10 + '0');
	}
	else if (result <= 99 && result >= 10)
	{
	_putchar((result / 10) + '0');
	}
	_putchar((result % 10) + '0');
	}
	_putchar('\n');
	}
	}
}

#include "main.h"

/**
 * print_binary - A program that prints the binary
 * equivalent of a decimal number
 * @n: The number to print in binary of
 */

void print_binary(unsigned long int n)

{
	int x;
	int numbof = 0;
	unsigned long int currentnumber;

	for (x = 63; x >= 0; x--)
	{
	currentnumber = n >> x;
	if (currentnumber & 1)
	{
	_putchar('1');
	numbof++;
	}
	else if (numbof)
	{
	_putchar('0');
	}
	}
	if (!numbof)
	{
	_putchar('0');
	}
}

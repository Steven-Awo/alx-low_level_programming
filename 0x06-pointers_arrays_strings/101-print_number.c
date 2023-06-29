 #include "main.h"

/**
 * print_number - A program to print numbers characters
 * @n: the interger parameter
 * Return: void (Successful)
 */

void print_number(int n)

{
	unsigned int a1;

	a1 = n;

	if (n < 0)
	{
	_putchar('-');
	a1 = -n;
	}
	if (a1 / 10 != 0)
	{
	print_number(a1 / 10);
	}
	_putchar((a1 % 10) + '0');
}

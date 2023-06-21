#include "stdio.h"

/**
 * main - A program that print the 1st 50  Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x = 0;
	long a = 1, b = 2;

	while (x < 50)
	{
	if (x == 0)
	{
	printf("%d", x);
	}
	else if (x == 1)
	{
	printf(", %d", b);
	}
	else
	{
	b = b + a;
	a = b - a;
	printf(", %d", b);
	}
	++x;
	}
}

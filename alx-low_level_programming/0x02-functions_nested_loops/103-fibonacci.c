#include "stdio.h"

/**
 * main - A program to check the function
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	long x = 1, y = 2, addi = y;

	while (x + y < 4000000)
	{
	y += x;
	if (y % 2 == 0)
	addi += y;
	x = y - x;
	++a;
	}
	printf("%ld\n", addi);
	return (0);
}

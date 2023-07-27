#include "stdio.h"

/**
 * main - A program that prints the sum of all the multi of 3 or 5 to 1024
 *
 * Return: 0 (success)
 */
int main(void)
{
	int x, y = 0;

	for (x = 0; x < 1024; x++)
	{
	if ((x % 3 == 0) || (x % 5 == 0))
	{
	y += x;
	}
	}
	printf("%d\n", y);
	return (0);
}

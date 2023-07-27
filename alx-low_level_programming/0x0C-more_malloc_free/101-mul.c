#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * is_digit - A program that checks if a string contains a non-digit char
 * @a: The string for evaluation
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *a)

{
	int x = 0;

	while (a[x])
	{
	if (a[x] < '0' || a[x] > '9')
		return (0);
	x++;
	}
	return (1);
}
/**
 * _strlen - A program that returns a string's length
 * @a: The string for evaluation
 * Return: x (successfull)
 */
int _strlen(char *a)

{
	int x = 0;

	while (a[x] != '\0')
	{
	x++;
	}
	return (x);
}

/**
 * errors -  the errors handler for main
 */
void errors(void)

{
	printf("Error\n");
	exit(98);
}
/**
 * main - A program that multi two positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0 (successful)
 */
int main(int argc, char *argv[])

{
	char *x1, *x2;
	int y1, y2, y, b, c, z1, z2, *summ, a = 0;

	x1 = argv[1], x2 = argv[2];
	if (argc != 3 || !is_digit(x1) || !is_digit(x2))
		errors();
	y1 = _strlen(x1);
	y2 = _strlen(x2);
	y = y1 + y2 + 1;
	summ = (int *)malloc(sizeof(int) * y);
	if (!summ)
		return (1);
	for (b = 0; b <= y1 + y2; b++)
		summ[b] = 0;
	for (y1 = y1 - 1; y1 >= 0; y1--)
	{
	z1 = x1[y1] - '0';
	c = 0;
	for (y2 = _strlen(x2) - 1; y2 >= 0; y2--)
	{
		z2 = x2[y2] - '0';
		c += summ[y1 + y2 + 1] + (z1 * z2);
		summ[y1 + y2 + 1] = c % 10;
		c /= 10;
	}
	if (c > 0)
		summ[y1 + y2 + 1] += c;
	}
	for (b = 0; b < y - 1; b++)
	{
	if (summ[b])
		a = 1;
	if (a)
		_putchar(summ[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(summ);
	return (0);
}

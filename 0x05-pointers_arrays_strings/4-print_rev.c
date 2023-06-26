#include "main.h"
#include <stdio.h>

/**
 * print_rev - A program to print a string in reverse
 * @s: To be executed
 * Return: 0 (successful)
 */

void print_rev(char *s)

{
	int x = 0;

	while (s[x] != '\0')
	{
	x++;
	}
	for (x -= 1; x >= 0; x--)
	{
	_putchar(s[x]);
	}
	_putchar('\n');
}

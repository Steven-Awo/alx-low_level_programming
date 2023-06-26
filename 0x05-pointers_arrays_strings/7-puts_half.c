#include "main.h"
#include <string.h>
/**
 * puts_half - A program that prints the second half of a str
 * @str: The caariable that is exercuted
 * Return: void
 */

void puts_half(char *str)

{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
	y++;
	}
	if (y % 2 == 1)
	{
	x = (y - 1) / 2;
	x += 1;
	}
	else
	{
	x = y / 2;
	}
	for (; x < y; x++)
	_putchar(str[x]);
	_putchar('\n');
}

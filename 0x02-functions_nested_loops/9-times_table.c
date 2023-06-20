#include "main.h"

/**
 * times_table - A program thhat prints nine times table from zero
 *
 * Return: empty` (success)
 */

void times_table(void)

{
	int v, w, x, y, z;

	for (v = 0; v <= 9; v++)
	{
	for (w = 0; x <= 9; w++)
	{
	x = v * w;
	if (x > 9)
	{
	y = x % 10;
	z = (x - y) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(z + '0');
	_putchar(y + '0');
	}
	else
	{
	if (y != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(x + '0');
	}
	}
	_putchar('\n');
	}
}

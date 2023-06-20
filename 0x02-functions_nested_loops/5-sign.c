#include "main.h"

/**
 * print_sign- A program that prints the sign of a number
 * @n: To check the character c
 * Return: 1 (> zero) or 0 (= zero) orv -1 (< zero)
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
        return (-1);
	}
	else
        {
        _putchar(48);
        return (0);
	}
}

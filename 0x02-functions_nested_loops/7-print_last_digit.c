#include "main.h"

/**
 * print_last_digit - A program that prints last digit of a number
 *@n: The number to be checked
 *Return: last digit (Success)
 */

int print_last_digit(int n)

{
	int lastnum;

	lastnum = n % 10;
	if (lastnum < 0)
	{
	lastnum = lastnum * -1;
	}
	_putchar(lastnum + 'O');
	return (lastnum);

}

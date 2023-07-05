#include "main.h"

/**
 * _print_rev_recursion - A program that  prints a string & a new line.
 * @s: The string to be used
 * Return: 0 (Successful)
 */

void _print_rev_recursion(char *s)

{
	if (*s  == '\0')
	{
	_putchar('\n');
	return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

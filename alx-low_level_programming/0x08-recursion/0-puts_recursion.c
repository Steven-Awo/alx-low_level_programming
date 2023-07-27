#include "main.h"

/**
 * _puts_recursion - A program that  prints a string & a new line.
 * @s: The string to be used
 * Return: 0 (Successful)
 */

void _puts_recursion(char *s)

{
	if (*s  == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

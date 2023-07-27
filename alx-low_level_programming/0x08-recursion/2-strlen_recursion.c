#include "main.h"

/**
 * _strlen_recursion - A program that  prints a string & a new line.
 * @s: The string to be used
 * Return: 0 (Successful)
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
	return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

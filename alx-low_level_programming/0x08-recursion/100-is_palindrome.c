#include "main.h"

/**
 * _strlen_recursion - A program that  prints returns the str's length.
 * @s: string
 * Return: the length of string.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _compar - compares each character of the string.
 * @s: string
 * @x: small itr.
 * @y: big itr.
 * Return: comper.
 */
int _compar(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
	if (x == y || x == y + 1)
	{
	return (1);
	}
	return (0 + _compar(s, x + 1, y - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_compar(s, 0, _strlen_recursion(s) - 1));
}


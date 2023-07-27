#include "main.h"
#include <stdio.h>

/**
 * _strchr - A program that locates a character in a string.
 * @s: The input
 * @c: The input
 * Return: 0 (Successful)
 */

char *_strchr(char *s, char c)

{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
	if (s[x] == c)
	return (s + x);
	}
	return (NULL);
}

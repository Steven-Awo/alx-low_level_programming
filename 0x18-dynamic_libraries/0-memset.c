#include "main.h"

/**
 * _memset - A program to compare two strngs
 * @s: The destination of the pointer
 * @b: The constant byte
 * @n: The byte
 * Return: 0 (Successful)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	s[x] = b;
	}
	return (s);
}

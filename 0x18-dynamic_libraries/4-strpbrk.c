#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A program that searches a string for any of a set of bytes
 * @s: The input
 * @accept: The input
 * Return: 0 (Successful)
 */

char *_strpbrk(char *s, char *accept)

{
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; accept[y] != '\0'; y++)
	{
	if (s[x] == accept[y])
	{
	return (s + x);
	}
	}
	}
	return (0);
}

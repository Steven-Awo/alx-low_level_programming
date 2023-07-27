#include "main.h"
#include <stdio.h>

/**
 * _strspn - A program that gets the length of a prefix substring.
 * @s: The input
 * @accept: The input
 * Return: 0 (Successful)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int x;
	unsigned int y;
	unsigned int num = 0;
	unsigned int test;

	for (x = 0; s[x] != '\0'; x++)
	{
	test = 0;
	for (y = 0; accept[y] != '\0'; y++)
	{
	if (accept[y] == s[x])
	{
	num++;
	test = 1;
	}
	}
	if (test == 0)
	{
	return (num);
	}
	}
	return (num);
}

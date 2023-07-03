#include "main.h"
#include <stdio.h>

/**
 * _strstr - A program that gets the length of a prefix substring.
 * @haystack: The input
 * @needle: The input
 * Return: 0 (Successful)
 */

char *_strstr(char *haystack, char *needle)

{
	for (; *haystack != '\0'; haystack++)
	{
	char *a = haystack;
	char *b = needle;

	while (*a == *b && *b != '\0')
	{
	a++;
	b++;
	}
	if (*b == '\0')
	{
	return (haystack);
	}
	}
	return (0);
}

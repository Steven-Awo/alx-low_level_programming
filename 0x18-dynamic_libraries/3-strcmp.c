#include "main.h"

/**
 * _strcmp - A program to compare two strngs
 * @s1: The source of the file
 * @s2: The destination of the file
 * Return: s1 > s2 (Successful)
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}

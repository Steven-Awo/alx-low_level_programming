#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - A program that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: z (successful)
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
	{
	a++;
	}
	while (s2[b])
	{
	b++;
	}
	d = a + b;
	z = (char *)malloc(sizeof(char) * (d + 1));

	if (z == NULL)
	{
	return (NULL);
	}
	while (c < a)
	{
	z[c] = s1[c];
	c++;
	}
	b = 0;
	while (c < d)
	{
	z[c] = s2[b];
	b++;
	c++;
	}
	z[c] = '\0';
	return (z);
}

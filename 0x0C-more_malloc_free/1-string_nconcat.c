#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - ...
 * @s1: first container
 * @s2: second container
 * @n: bytes
 * Return: chr (successful)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *chr;
	unsigned int a = 0, b = 0, c = 0, d = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	while (s1[a])
	{
	a++;
	}
	while (s2[c])
		c++;
	if (n >= c)
		d = a + c;
	else
		d = a + n;
	chr = malloc(sizeof(char) * d + 1);
	if (chr == NULL)
	{
	return (NULL);
	}
	c = 0;
	while (b < d)
	{
	if (b <= a)
		chr[b] = s1[b];
	if (b >= a)
	{
	chr[b] = s2[c];
	c++;
	}
	b++;
	}
	chr[b] = '\0';
	return (chr);
}

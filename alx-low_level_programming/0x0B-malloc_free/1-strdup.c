#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A program that duplicates a string
 * @str: The string
 * Return: s (successful)
 */

char *_strdup(char *str)

{
	int x = 0;
	int y = 1;
	char *z;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[y])
	{
	y++;
	}
	z = (char *)malloc((sizeof(char) * y) + 1);
	if (z == NULL)
	{
	return (NULL);
	}
	while (x < y)
	{
	z[x] = str[x];
	x++;
	}
	z[x] = '\0';
	return (z);
}

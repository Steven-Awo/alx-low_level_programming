#include "main.h"

/**
 * _strncpy - A program copies a string
 * @src: The source of the file
 * @dest: The destination of the file
 * @n: the number of byte
 * Return: 0 (Successful)
 */

char *_strncpy(char *dest, char *src, int n)

{
	int ind = 0;
	int src_l = 0;

	while (src[ind++])
	{
	src_l++;
	}
	for (ind = 0; src[ind] && ind < n; ind++)
	{
	dest[ind] = src[ind];
	}
	for (ind = src_l; ind < n; ind++)
	{
	dest[ind] = '\0';
	}
	return (dest);
}

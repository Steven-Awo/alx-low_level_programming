#include "main.h"

/**
 * _strncat - A program to concatenate two strngs
 * @src: The source of the file
 * @dest: The destination of the file
 * @n: the number of byte
 * Return: 0 (Successful)
 */

char *_strncat(char *dest, char *src, int n)

{
	int ind = 0;
	int dest_l = 0;

	while (dest[ind++])
	{
	dest_l++;
	}
	for (ind = 0; src[ind] && ind < n; ind++)
	{
	dest[dest_l++] = src[ind];
	}
	return (dest);
}

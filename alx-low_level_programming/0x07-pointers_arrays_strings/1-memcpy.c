#include "main.h"

/**
 * _memcpy - A program that copies memory area
 * @dest: The destination of the pointer
 * @src: The source of the pointer
 * @n: The byte
 * Return: 0 (Successful)
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	dest[x] = src[x];
	}
	return (dest);
}

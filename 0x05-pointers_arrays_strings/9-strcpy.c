#include "main.h"
#include <string.h>
/**
 * *_strcpy - A program that copies the string pointed to by src
 * @dest: Destination value
 * @src: Source value
 * Return: void
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

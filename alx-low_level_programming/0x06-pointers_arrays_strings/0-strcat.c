#include "main.h"

/**
 * _strcat - check the code
 * @src: source of file
 * @dest: destination of file
 * Return: 0 (Successful)
 */

char *_strcat(char *dest, char *src)

{
	int ind = 0;
	int dest_l = 0;

	while (dest[ind] != '\0')
	{
	ind++;
	}
	while (src[dest_l] != '\0')
	{
	dest[ind] = src[dest_l];
	ind++;
	dest_l++;
	}
	dest[ind] = '\0';
	return (dest);
}

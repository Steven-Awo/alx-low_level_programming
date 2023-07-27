#include "main.h"

/**
 * leet - A program to concatenate two strngs
 * @m: the number in the array
 * Return: 0 (Successful)
 */

char *leet(char *m)

{
	int x;
	int y;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0; m[x] != '\0'; x++)
	{
	for (y = 0; y < 10; y++)
	{
	if (m[x] == a[y])
	{
	m[x] = b[y];
	}
	}
	}
	return (m);
}

#include "main.h"

/**
 * string_toupper - A program to concatenate two strngs
 * @x: The string to be changed to uppercase
 * Return: x (Successful)
 */

char *string_toupper(char *x)

{
	int numb = 0;

	while (x[numb])
	{
	if (x[numb] > 'a' && x[numb] <= 'z')
	x[numb] -= 32;
	numb++;
	}
	return (x);
}

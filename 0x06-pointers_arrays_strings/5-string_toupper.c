#include "main.h"

/**
 * string_toupper - A program to change from lowercase 2 uppercase
 * @x: The alphabet to be changed
 * Return: 0 (Successful)
 */

char *string_toupper(char *x)

{
	int numb = 0;

	while (x[numb])
	{
	if (x[numb] > 97 && x[numb] <= 122)
	x[numb] -= 32;
	numb++;
	}
	return (x);
}

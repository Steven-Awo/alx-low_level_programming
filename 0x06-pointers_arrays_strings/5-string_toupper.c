#include "main.h"

/**
 * string_toupper - A program to change from lowercase 2 uppercase
 * @x: The alphabet to be changed
 * Return: 0 (Successful)
 */

char *string_toupper(char *x)

{
	int numb = 0;

	while (x[numb] != '\0')
	{
		if (x[numb] > 'a' && x[numb] <= 'z')
		x[numb] -= 32;
		numb++;
	}
	return (x);
}

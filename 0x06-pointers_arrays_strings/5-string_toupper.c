#include "main.h"

/**
 * string_toupper - A program to change from lowercase 2 uppercase
 * @x: The alphabet to be changed
 * Return: 0 (Successful)
 */

char *string_toupper(char *x)

{
	int a = 0;
	
	while (x[a] != '\0')
	{
		if (x[a] > 'a' && x[a] <= 'z')
			x[a] = x[a] - 32;
		a++;
	}
	return (x);
}

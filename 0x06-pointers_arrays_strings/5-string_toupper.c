#include "main.h"

/**
 * string_toupper - A program to concatenate two strngs
 * @x: The string to be changed to uppercase
 * Return: x (Successful)
 */

char *string_toupper(char *str)

{
	int numb = 0;

	while (str[numb])
	{
	if (str[numb] > 'a' && str[numb] <= 'z')
	str[numb] -= 32;
	numb++;
	}
	return (str);
}

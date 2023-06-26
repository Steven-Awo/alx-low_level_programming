#include "main.h"
#include <string.h>
/**
 *  rev_string - A program that prints a string in reverse
 * @s: The caariable that is exercuted
 * Return: void
 */

void rev_string(char *s)

{
	int x = 0;
	int leny = 0;
	char holdz;

	while (s[x++])
	{
	leny++;
	}

	for (x = leny - 1; x >= leny / 2; x--)
	{
	holdz = s[x];
	s[x] = s[leny - x - 1];
	s[leny - x - 1] = holdz;
	}
}

#include "main.h"

/**
 * cap_string - A program to capitalize
 * @a: the number in the array
 * Return: 0 (Successful)
 */

char *cap_string(char *a)

{
	int numb = 0;

	while (a[numb])
	{
	while (!(a[numb] >= 'a' && a[numb] <= 'z'))
	numb++;
	if (a[numb - 1] == ' ' ||
	a[numb - 1] == '\t' ||
	a[numb - 1] == '\n' ||
	a[numb - 1] == ',' ||
	a[numb - 1] == ';' ||
	a[numb - 1] == '.' ||
	a[numb - 1] == '!' ||
	a[numb - 1] == '?' ||
	a[numb - 1] == '"' ||
	a[numb - 1] == '(' ||
	a[numb - 1] == ')' ||
	a[numb - 1] == '{' ||
	a[numb - 1] == '}' ||
	numb == 0)
	a[numb] -= 32;
	numb++;
	}
	return (a);
}

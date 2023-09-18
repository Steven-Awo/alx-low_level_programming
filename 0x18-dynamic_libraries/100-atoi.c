#include "main.h"
#include <string.h>
/**
 * _atoi - A program that prints the 1st char of a str on new line
 * @s: The caariable that is exercuted
 * Return: void
 */

int _atoi(char *s)

{
	int x = 0;
	unsigned int ui = 0;
	int min = 1;
	int isi = 0;

	while (s[x])
	{
	if (s[x] == 45)
	{
	min *= -1;
	}
	while (s[x] >= 48 && s[x] <= 57)
	{
	isi = 1;
	ui = (ui * 10) + (s[x] - '0');
	x++;
	}
	if (isi == 1)
	{
	break;
	}
	x++;
	}
	ui *= min;
	return (ui);
}

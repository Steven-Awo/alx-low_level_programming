#include "main.h"
#include <string.h>
/**
 * puts2 - A program that prints the 1st char of a str on new line
 * @str: The caariable that is exercuted
 * Return: void
 */

void puts2(char *str)

{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
	a++;
	}
	for (b = 0; b < a; b += 2)
	{
	_putchar(str[b]);
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * _puts - A program that prints a string a new line, to stdout
 * @str: The caariable that is exercuted
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

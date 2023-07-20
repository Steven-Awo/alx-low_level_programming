#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

/**
 * print_strings - A program that prints strings and a new line.
 * @separator: The dimacation
 * @n: The value to be iterated to
 * Return: x (successfull)
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int x = 0;
	char *y;

	if (n > 0)
	{
	va_start(args, n);
	while (x < n)
	{
	y = va_arg(args, char *);
	if (y == NULL)
	{
	printf("%s", "(nil)");
	}
	else
	{
	printf("%s", y);
	}
	if (x != n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	x++;
	}
	va_end(args);
	}
	printf("\n");
}

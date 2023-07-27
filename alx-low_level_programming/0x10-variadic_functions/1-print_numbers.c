#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - A program that prints numbers and a new line.
 * @separator: The dimacation
 * @n: The value to be iterated to
 * Return: x (successfull)
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list args;
	unsigned int x = 0;

	if (n > 0)
	{
	va_start(args, n);
	while (x < n)
	{
	printf("%d", va_arg(args, int));
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

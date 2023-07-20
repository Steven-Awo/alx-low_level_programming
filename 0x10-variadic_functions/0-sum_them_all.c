#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A program that returns the sum of all its parameters.
 * @n: The values to be sumed
 * Return: 0 or summission (successfully)
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list args;
	unsigned int x = 0;
	int summission = 0;

	if (n != 0)
	{
	va_start(args, n);
	while (x < n)
	{
	summission += va_arg(args, int);
	x++;
	}
	va_end(args);
	return (summission);
	}
	return (0);
}

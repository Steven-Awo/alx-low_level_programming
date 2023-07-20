#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A program thart prints anything given
 * @format: The conversion specifier to prints
 * Return: void (successful)
 */

void print_all(const char * const format, ...)

{
	va_list args;
	f_dt form_types[] = {
		{ "c", print_a_char },
		{ "i", print_a_integer },
		{ "f", print_a_float },
		{ "s", print_a_char_ptr }
	};
	unsigned int x = 0;
	unsigned int y = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[x])
	{
	y = 0;
	while (y < 4)
	{
	if (format[x] == *form_types[y].identifier)
	{
	form_types[y].f(separator, args);
	separator = ", ";
	}
	y++;
	}
	x++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_a_char - A program that prints a character of char type
 * @separator: The character sperator
 * @args: The variadic arguments list
 * Return: Void (sucessful)
 */

void print_a_char(char *separator, va_list args)

{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_a_integer - A program that prints a chtr of int type
 * @s: The character sperator
 * @args: The variadic arguments list
 * Return: Void (sucessful)
 */

void print_a_integer(char *separator, va_list args)

{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_a_float - A program that prints a character of float type
 * @separator: The separator of the character
 * @args: The variadic arguments list
 * Return: Void (sucessful)
 */

void print_a_float(char *separator, va_list args)

{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_a_char_ptr - A program that prints the content of pointer to char type
 * @separator: The separator of the character
 * @args: The variadic arguments list
 * Return: Void (sucessful)
 */

void print_a_char_ptr(char *separator, va_list args)

{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
	printf("%s%s", separator, "(nil)");
	return;
	}
	printf("%s%s", separator, arg);
}

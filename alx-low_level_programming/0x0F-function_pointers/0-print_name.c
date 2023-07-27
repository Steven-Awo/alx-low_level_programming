#include "function_pointers.h"

/**
 * print_name - A program that prints a name using pointer.
 * @name: The function that holds the name
 * @f: The pointer to the fuction
 *
 *Return: void (successful)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	f(name);
	}
}

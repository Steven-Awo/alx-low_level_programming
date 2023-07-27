#include "main.h"

/**
 * factorial - A program that returns the factorial of given num
 * @n: The string to be used
 * Return: -1 if less than zero or 0 (Successful)
 */

int factorial(int n)

{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n *  factorial(n - 1));
}

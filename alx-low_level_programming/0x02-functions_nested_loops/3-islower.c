#include "main.h"

/**
 * _islower - A program that checks for lowercase character
 *@c: chech the character c
 *Return: 1 lowercase (Success) or 0 else
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

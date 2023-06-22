#include "main.h"

/**
 * _isdigit - check the code
 * @c: The values to be checked
 * Return: 1 (successful) or 0 (otherwise)
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}

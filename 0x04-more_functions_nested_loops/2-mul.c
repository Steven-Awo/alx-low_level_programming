#include "main.h"

/**
 * mul - check the code
 * @a: first to be checked
 * @b: second to be checked
 * Return: 0 (Successful)
 */

int mul(int a, int b)

{
	if (a % 1 == 0 && b % 1 == 0)
	{

		int result = a * b;

		return (result);
	}
	return (0);
}

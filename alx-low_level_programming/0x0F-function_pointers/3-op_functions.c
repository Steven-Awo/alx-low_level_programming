#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - The program that adds two numbers
 * @a: The first value
 * @b: The second value
 * Return: sum of a and b
 */

int op_add(int a, int b)

{
	return (a + b);
}

/**
 * op_sub - The program that subtracts two numbers
 * @a: The first value
 * @b: The second value
 * Return: The subtraction of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A program that multiplies two numbers
 * @a: The first value
 * @b: The second value
 * Return: The multiplication of a and b
 */

int op_mul(int a, int b)

{
	return (a * b);
}

/**
 * op_div - A program that divides numbers
 * @a: The first value
 * @b: The second value
 * Return: The division of a and b
 */

int op_div(int a, int b)

{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}

/**
 * op_mod - A program that finds the modulus of two numbers
 * @a: The first value
 * @b: The second value
 * Return: The modulus of a and b
 */

int op_mod(int a, int b)

{
	if (b == 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}

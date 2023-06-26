#include "main.h"
#include <stdio.h>

/**
 * main - A program that checks the code
 *
 * Return: 0 (successful)
 */

int main(void)

{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}

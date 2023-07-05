#include "main.h"
#include <stdio.h>

/**
 * main - A program that test the code
 *
 * Return: 0 (successful)
 */

int main(void)

{
	int r;

	r = is_palindrome("level");
	printf("%d\n", r);
	r = is_palindrome("redder");
	printf("%d\n", r);
	r = is_palindrome("test");
	printf("%d\n", r);
	r = is_palindrome("step on no pets");
	printf("%d\n", r);
	return (0);
}

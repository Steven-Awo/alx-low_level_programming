#include "main.h"
#include <stdio.h>

/**
 * main - A program that check the code.
 *
 * Return: 0 (successful)
 */

int main(void)

{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

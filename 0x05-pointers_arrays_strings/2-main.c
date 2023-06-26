#include "main.h"
#include <stdio.h>

/**
 * main - A program to test the code
 *
 * Return: 0 (successful)
 */

int main(void)

{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

#include "main.h"

/**
 * rot13 - A program to encoder rot13
 * @x: the number of array
 * Return: *x (Successful)
 */

char *rot13(char *x)

{
	int a;
	int b;

	char info1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inforot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; x[a] != '\0'; a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (x[a] == info1[b])
	{
	x[a] = inforot[b];
	break;
	}
	}
	}
	return (x);
}

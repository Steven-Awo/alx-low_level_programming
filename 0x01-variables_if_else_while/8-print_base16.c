#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints lowercase & Uppercase alphabet
 *
 *Return: 0 (Success)
 */
int main(void)

{
	char x, y;

	for (x = '0'; x <= '9'; x++)
	putchar(x);
	for (y = 'a'; y <= 'f'; y++)
	putchar(y);
	putchar('\n');
	return (0);

}

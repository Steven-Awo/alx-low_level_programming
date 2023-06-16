#include<stdio.h>
/**
 * main - A program that prints lowercase & Uppercase alphabet
 *
 *Return: 0 (Success)
 */
int main(void)

{
	char x, y;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
	putchar(y);
	putchar('\n');
	return (0);

}

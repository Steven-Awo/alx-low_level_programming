#include<stdio.h>
/**
 * main - A program that prints lowercase & Uppercase alphabet
 *
 *Return: 0 (Success)
 */
int main(void)

{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
	putchar(x);
	}
	for (y = '0'; y <= '9'; y++)
	putchar(y);
	{
	if (y != '9')
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);

}

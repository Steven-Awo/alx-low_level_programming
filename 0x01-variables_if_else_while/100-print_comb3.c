#include<stdio.h>
/**
 * main - A program that prints lowercase & Uppercase alphabet
 *
 *Return: 0 (Success)
 */
int main(void)

{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	if (x != y)
	{
	putchar(x);
	putchar(y);
	if (x == '8' && y == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);

}

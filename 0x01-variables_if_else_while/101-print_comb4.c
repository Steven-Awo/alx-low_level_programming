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
	for (z = y + 2; z <= '9'; z++)
	{
	if ((x != y) != z)
	{
		putchar(x);
		putchar(y);
		putchar(z);
	if (x == '7' && y == '8' && z == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);

}

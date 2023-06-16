#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - A program that prints alphabet in a new line(lowercase)
 *
 *Return: 0 (Success)
 */
int main(void)

{
	char x;

	for (x = 'a'; x = 'z'; x++)
	{
	if (x != 'e' || 'q')
	putchar(x);
	}
	putchar('\n');
	return (0);
}

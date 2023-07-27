#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - A program that prints the multiple of number of args
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 (successfukl) or 1 (unsuccessful)
 */

int main(int argc, char *argv[])

{
	int x = 0;
	unsigned int y;
	unsigned int sum = 0;
	char *e;

	if (argc > 1)
	{
	for (x = 1; x < argc; x++)
	{
	e = argv[x];
	for (y = 0; y < strlen(e); y++)
	{
	if (e[y] < 48 || e[y] > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(e);
	e++;
	}
	printf("%d\n", sum);
	}
	else
	{
	printf("0\n");
	}
	return (0);
}

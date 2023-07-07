#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all the contents of args
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 (successfukl)
 */

int main(int argc, char *argv[])

{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s\n", argv[x]);
	}
	return (0);
}

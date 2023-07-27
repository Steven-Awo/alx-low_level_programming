#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints number of the contents of args
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 (successfukl)
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

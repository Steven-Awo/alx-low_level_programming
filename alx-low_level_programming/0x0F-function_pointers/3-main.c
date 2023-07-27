#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that checks code
 * @argc: the arguement count
 * @argv: the arguement vector
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])

{
	int (*x)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	x = get_op_func(argv[2]);
	if (!x)
	{
	printf("Error\n");
	exit(99);
	}
	printf("%d\n", x(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

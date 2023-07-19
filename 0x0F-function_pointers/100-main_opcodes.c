#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints its opcodes.
 * @argc: The program number of arguments supplied.
 * @argv: The array's pointers to the arguments.
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])

{
	int x;
	int y;
	int (*z)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
	printf("Error\n");
	exit(2);
	}
	for (y = 0; y < x; y++)
	{
	opcode = *(unsigned char *)z;
	printf("%.2x", opcode);
	if (y == x - 1)
	{
	continue;
	}
	printf(" ");
	z++;
	}
	printf("\n");
	return (0);
}

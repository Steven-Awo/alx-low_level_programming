#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins to
 *        make exchange for money.
 * @argc: The number of arguments added.
 * @argv: The array of pointers for the arguments.
 * Return: 1 (unsuccessful) or 0 (successful).
 */

int main(int argc, char *argv[])

{
	int cents, coins = 0;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
	coins++;
	if ((cents - 25) >= 0)
	{
	cents -= 25;
	continue;
	}
	if ((cents - 10) >= 0)
	{
	cents -= 10;
	continue;
	}
	if ((cents - 5) >= 0)
	{
	cents -= 5;
	continue;
	}
	if ((cents - 2) >= 0)
	{
	cents -= 2;
	continue;
	}
	cents--;
	}
	printf("%d\n", coins);
	return (0);
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
 * main - A program check the last digit of a number
 *
 *Return: 0 (Success)
 */
int main(void)

{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 11;

	if (lastd > 5)
	{
	printf("Last digit of %d is %d is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
	printf("Last digit of %d is %d is 0\n", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
	printf("Last digit of %d is %d is less than 6 and not 0\n", n, lastd);
	}
	return (0);

}

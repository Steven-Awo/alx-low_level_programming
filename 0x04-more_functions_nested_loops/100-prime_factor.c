#include <math.h>
#include <stdio.h>
/**
 * main- A program that prints the largest prime factor of 612852475143
 *
 * Return: 0 (successful)
 */

int main(void)

{
	long a, bigst;
	long num = 612852475143;
	double squ = sqrt(num);

	for (a = 1; a <= squ; a++)
	{
	if (num % a == 0)
	{
	bigst = num / a;
	}
	}
	printf("%ld\n", bigst);
	return (0);
}

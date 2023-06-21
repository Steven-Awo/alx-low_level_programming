#include "stdio.h"

/**
 * main - A program to print 1st 98 fibonacci starting with 1&2
 *
 * Return: 0 (success)
 */
int main(void)
{
	int count; 
	unsigned long fi1 = 0, fi2 = 1, addi;
	unsigned long fi1_hf1, fi1_hf2, fi2_hf1, fi2_hf2;
	unsigned long hf1, hf2;

	for (count = 0; count <= 92; count++)
	{
	addi = fi1 + fi2;
	printf("%lu, ", addi);
	fi1 = fi2;
	fi2 = addi;
	}
	fi1_hf1 = fi1 / 10000000000;
	fi1_hf2 = fi2 / 10000000000;
	fi2_hf1 = fi1 / 10000000000;
	fi2_hf2 = fi2 / 10000000000;
	for  (count = 93; count < 99; count++)
	{
	hf1 = fi1_hf1 + fi2_hf1;
	hf2 = fi1_hf2 + fi2_hf2;
	if (fi1_hf2 + fi2_hf2 > 9999999999)
	{
	hf1 += 1;
	hf2 %= 10000000000;
	}
	printf("%lu%lu", hf1, hf2);
	if (count != 98)
	printf(", ");
	fi1_hf1 = fi2_hf1;
	fi1_hf1 = fi2_hf2;
	fi1_hf2 = hf1;
	fi1_hf2 = hf2;
	}
	printf("\n");
	return (0);
}

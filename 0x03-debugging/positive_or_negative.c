#include<stdio.h>
#include "main.h"
/**
 * positive_or_negative - A program that checks if its + or - or 0
 * @i: the number to be checked
 * Return: 0 (Success)
 */
void positive_or_negative(int i)

{

	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
	printf("%d is zero\n", i);
	}
	else
	{
	printf("%d is negative\n", i);
	}

}

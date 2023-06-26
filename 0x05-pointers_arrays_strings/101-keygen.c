#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that generates random password
 * program 101-crackme.
 * Return: 0 (successful)
 */

int main(void)

{
	char password[84];
	int index = 0;
	int sum = 0;
	int half1;
	int half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';
	if (sum != 2772)
	{
		half1 = (sum - 2772) / 2;
		half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
		half1++;
		for (index = 0; password[index]; index++)
		{
		if (password[index] >= (33 + half1))
		{
			password[index] -= half1;
			break;
		}
		}
		for (index = 0; password[index]; index++)
		{
		if (password[index] >= (33 + half2))
		{
			password[index] -= half2;
			break;
		}
		}
	}
	printf("%s", password);
	return (0);
}

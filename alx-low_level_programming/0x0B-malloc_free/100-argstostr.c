#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * argstostr - A program to convert the params passed into a string
  * @ac: The argument count used
  * @av: The argument vector used
  * Return: ...
  */

char *argstostr(int ac, char **av)

{
	int a = 0, b = 0, c = 0, ex = 0;
	char *z;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	while (a < ac)
	{
	while (av[a][b])
	{
	ex++;
	b++;
	}
	b = 0;
	a++;
	}
	z = (char *)malloc(sizeof(char) * (ex + ac + 1));
	a = 0;
	while (av[a])
	{
	while (av[a][b])
	{
	z[c] = av[a][b];
	c++;
	b++;
	}
	z[c] = '\n';
	b = 0;
	c++;
	a++;
	}
	c++;
	z[c] = '\0';
	return (z);
}

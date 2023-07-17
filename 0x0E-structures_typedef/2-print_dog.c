#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - A program that prints the dog's info
 * @d: The dog's structure.
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
	printf("NAME: %s\n", (d->name) ? d->name : "(nil)");
	printf("AGE: %f\n", (d->age) ? d->age : 0);
	printf("OWNER: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

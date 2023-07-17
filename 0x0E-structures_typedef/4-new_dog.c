#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - A program that initializes structure of a dog
 * @name: The dog's name.
 * @age: The dog's age.
 * @owner: The dog's owner
 * Return: max_dog (succesfful)
 */

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *max_dog;
	int name_l = 0;
	int own_l = 0;

	if (name != NULL && owner != NULL)
	{
	name_l = _strlen(name) + 1;
	own_l = _strlen(owner) + 1;
	max_dog = malloc(sizeof(dog_t));
	if (max_dog == NULL)
	{
	return (NULL);
	}
	max_dog->name = malloc(sizeof(char) * name_l);
	if (max_dog->name == NULL)
	{
	free(max_dog);
	return (NULL);
	}
	max_dog->owner = malloc(sizeof(char) * own_l);
	if (max_dog->owner == NULL)
	{
	free(max_dog->name);
	free(max_dog);
	return (NULL);
	}
	max_dog->name = _strcpy(max_dog->name, name);
	max_dog->owner = _strcpy(max_dog->owner, owner);
	max_dog->age = age;
	}
	return (max_dog);
}

/**
  * _strlen - A program that returns the length of a str
  * @s: the count of str
  * Return: x (successful)
  */

int _strlen(char *s)

{
	int x = 0;

	for (; *s != '\0'; s++)
	{
	x++;
	}
	return (x);
}

/**
  * _strcpy - A program that copies a string
  * @dest: the destination
  * @src: the Source
  * Return: dest (successful)
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

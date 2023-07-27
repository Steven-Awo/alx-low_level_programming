#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - A proggram that locates the num marking the end of the
 *            first word contained
 * @str: The string to be searched.
 * Return: str (successful)
 */

int word_len(char *str)

{
	int num = 0, dis = 0;

	while (*(str + num) && *(str + num) != ' ')
	{
	dis++;
	num++;
	}
	return (dis);
}

/**
 * count_words - A program that counts the number of words contained in str
 * @str: The string thats to be searched for.
 * Return: str contained (successful)
 */

int count_words(char *str)
{
	int num = 0, dis = 0;
	int alph = 0;

	for (num = 0; *(str + num); num++)
	{
	dis++;
	}
	for (num = 0;  num < dis; num++)
	{
	if (*(str + num) != ' ')
	{
	alph++;
	num += word_len(str + num);
	}
	}
	return (alph);
}

/**
 * strtow - S program that splits a string into different words.
 * @str: The string to be disected.
 * Return: str (successful) or NULL or  "" for (unsuccessful).
 */

char **strtow(char *str)

{
	char **strings;
	int num = 0, alph, x, lets, y;

	if (str == NULL || str[0] == '\0')
	{
	return (NULL);
	}
	alph = count_words(str);
	if (alph == 0)
	{
	return (NULL);
	}
	strings = (char **)malloc(sizeof(char *) * (alph + 1));
	if (strings == NULL)
		return (NULL);
	for (x = 0; x < alph; x++)
	{
	while (str[num] == ' ')
		num++;
	lets = word_len(str + num);
	strings[x] = (char *)malloc(sizeof(char) * (lets + 1));
	if (strings[x] == NULL)
	{
	for (; x >= 0; x--)
		free(strings[x]);
	free(strings);
	return (NULL);
	}
	for (y = 0; y < lets; y++)
		strings[x][y] = str[num++];
	strings[x][y] = '\0';
	}
	strings[x] = NULL;
	return (strings);
}

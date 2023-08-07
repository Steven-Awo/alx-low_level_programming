#include "main.h"

/**
 * create_file - A program that creates a file.
 * @filename: the name of the file to being created.
 * @text_content: the pointer to the string to write
 * to the file.
 * Return: 1 (successful) or -1 (unsuccessful).
 */

int create_file(const char *filename, char *text_content)

{
	int fild;
	int x;
	int length = 0;

	if (filename == NULL)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
	for (length = 0; text_content[length];)
	{
	length++;
	}}
	fild = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(fild, text_content, length);
	if (fild == -1 || x == -1)
	{
	return (-1);
	}
	close(fild);
	return (1);
}

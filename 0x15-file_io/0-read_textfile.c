#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A program that reads the text
 * file print to STDOUT.
 * @filename: the text file being read from.
 * @letters: the number of letters to be read
 * Return: x the number of bytes read and printed(successful)
 * or 0 fails or NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buff;
	ssize_t fid;
	ssize_t x;
	ssize_t y;

	fid = open(filename, O_RDONLY);
	if (fid == -1)
	{
	return (0);
	}
	buff = malloc(sizeof(char) * letters);
	y = read(fid, buff, letters);
	x = write(STDOUT_FILENO, buff, y);

	free(buff);
	close(fid);
	return (x);
}

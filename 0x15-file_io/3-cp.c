#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fid);

/**
 * create_buffer - A program that allocates bytes of 1024 for a buffer.
 * @file: The file name the buffer is storing chars for.
 * Return: newly-allocated 'buff'(successfull).
 */

char *create_buffer(char *file)

{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
	}
	return (buff);
}

/**
 * close_file - A program that closes the file descriptors.
 * @fid: The file with the descriptor to be closed.
 */

void close_file(int fid)

{
	int x;

	x = close(fid);
	if (x == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fid);
	exit(100);
	}
}

/**
 * main - A program that copies the contents from a file
 * to another file.
 * @argc: The number of arguments that is giving to the program.
 * @argv: The pointers for array to the arguments.
 * Return: 0 (successfull).
 * Description: If the argument count is wrong - exit code 97.
 * If file_from does not exist or can't be read - exit code 98.
 * If file_to can't be created or written to - exit code 99.
 * If file_to or file_from can't be closed - exit code 100.
 */

int main(int argc, char *argv[])

{
	int comingfrom, goingto, x, y;
	char *buff;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	buff = create_buffer(argv[2]);
	comingfrom = open(argv[1], O_RDONLY);
	x = read(comingfrom, buff, 1024);
	goingto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
	if (comingfrom == -1 || x == -1)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
	free(buff);
	exit(98);
	}
	y = write(goingto, buff, x);
	if (goingto == -1 || y == -1)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
	free(buff);
	exit(99);
	}
	x = read(comingfrom, buff, 1024);
	goingto = open(argv[2], O_WRONLY | O_APPEND);
	} while (x > 0);
	free(buff);
	close_file(comingfrom);
	close_file(goingto);
	return (0);
}

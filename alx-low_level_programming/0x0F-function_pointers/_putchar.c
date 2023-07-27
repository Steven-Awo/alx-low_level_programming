#include <unistd.h>

/**
 * 
 * _putchar - A program that prints in putchar.
 * @x: The character to be printed
 * Return: 1 (successful) or -1 (unsuccessful)
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char x)

{
	return (write(1, &c, 1));
}

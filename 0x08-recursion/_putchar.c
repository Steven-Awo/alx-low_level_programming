#include <unistd.h>

/**
 * _putchar - A program to print single character
 * @c: the character c  is repesenting is checked
 * Return: 1 (successful)
 * On error, -1 is returned, errno is set appropriately.
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}

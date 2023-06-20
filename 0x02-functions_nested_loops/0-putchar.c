#include<stdio.h>
/**
 * _putchar - A program that writes the character c on th stdout
 * @c: The character to print
 *
 *Return: 1 (Success)
 *On error, -1 is returned with an errno is set appropriately
 */
int _putchar(char c)

{
	return (write(1, &c, 1));
}

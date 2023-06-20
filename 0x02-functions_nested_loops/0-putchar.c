#include<unistd.h>
/**
 * _putchar - A program that writes the character c on th stdout
 * @c: The character to print
 * Return: 0n success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)

{
	
	return (write(1, &c, 1));
}

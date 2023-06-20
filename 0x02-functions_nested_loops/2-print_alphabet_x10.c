#include "main.h"

/**
 * print_alphabet_x10 - A program that prints lowercase & Uppercase alphabet 10x
 *
 * Return: void (Success)
 */

void print_alphabet_x10(void)

{
char alph;
int num;
for (num = 0; num < 10; num++)
{
for (alph = 'a'; alph <= 'z'; alph++)
_putchar(alph);
_putchar('\n');
}
}

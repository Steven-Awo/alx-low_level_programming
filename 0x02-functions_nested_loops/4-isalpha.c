#include "main.h"

/**
 * _isalpha - A program that checks for alphabets
 *@c: To check the character c
 * Return: 1 (Success) or 0 else
 */

int _isalpha(int c)

{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

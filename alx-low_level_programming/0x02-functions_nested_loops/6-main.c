#include "main.h"
#include <stdio.h>

/**
 * main - A program that computes the absolute value of an integer
 *
 * Return: 0 (success)
 */

int main(void)

{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

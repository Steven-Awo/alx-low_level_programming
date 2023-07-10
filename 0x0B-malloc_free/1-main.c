#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program to test the code
 *
 * Return: 0 (successful)
 */

int main(void)

{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

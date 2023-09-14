#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - A function that generate a key which depends on a
 * username for crackme5
 * @argc: the number of arguments that was passed
 * @argv: the arguments vector passed to main
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	unsigned int x, y;
	size_t lengt, addd;
	char *m = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char n[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	lengt = strlen(argv[1]);
	n[0] = m[(lengt ^ 59) & 63];
	for (x = 0, addd = 0; x < lengt; x++)
		addd += argv[1][x];
	n[1] = m[(addd ^ 79) & 63];
	for (x = 0, y = 1; x < lengt; x++)
		y *= argv[1][x];
	n[2] = m[(y ^ 85) & 63];
	for (y = argv[1][0], x = 0; x < lengt; x++)
		if ((char)y <= argv[1][x])
			y = argv[1][x];
	srand(y ^ 14);
	n[3] = m[rand() & 63];
	for (y = 0, x = 0; x < lengt; x++)
		y += argv[1][x] * argv[1][x];
	n[4] = m[(y ^ 239) & 63];
	for (y = 0, x = 0; (char)x < argv[1][0]; x++)
		y = rand();
	n[5] = m[(y ^ 229) & 63];
	printf("%s\n", n);
	return (0);
}

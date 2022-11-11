#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: coundt the arguments passed to command line
 * @argv: the argument for pointer vector or tring
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result = 0, x, y, z;

	for (x = 1; x < argc; x++)
	{
		for (y = 1; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; ++)
		result += atoi(argv[z]);
	printf("%d\n", result);

	return (0);
}


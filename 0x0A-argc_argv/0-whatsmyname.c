#include "main.h"
#include <stdio.h>

/**
 * main - prints its name
 * @argc: counts the parameter
 * @argv: the arguments for vector
 * Return: Always 0
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", i, argv[i]);
	}
	return (0);
}

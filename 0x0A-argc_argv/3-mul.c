#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: counts the arguments
 * @argv: vector argument or sting
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}

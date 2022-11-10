#include "main.h"

/**
 * main - introduction to argc and argv
 *
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", agrv[i]);
	}

	return (0);
}

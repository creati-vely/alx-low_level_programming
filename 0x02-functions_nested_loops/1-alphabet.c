#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed a new line.
 *
 * Return: alwys 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}

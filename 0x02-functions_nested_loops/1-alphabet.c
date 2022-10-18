#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed a new line.
 *
 * Return: alwys 0
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');

	return (0);
}

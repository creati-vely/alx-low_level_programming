#include "main.h"

/**
 * print_most_numbers - this prints the numbers from 0 - 9
 *
 * Return: 0
 */

void print_most_numbers(viod)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}
	_putchar('\n');
}

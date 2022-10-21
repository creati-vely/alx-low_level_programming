#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n = 0;

	for (; n <= 9; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}

	_putchar('\n');
}

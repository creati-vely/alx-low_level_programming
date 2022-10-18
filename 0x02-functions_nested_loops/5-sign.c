#include "main.h"

/**
 * print_sign - prints the sign of number.
 *
 * @n: checking the numbers
 *
 * Return: always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(23);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(25);
		return (-1);
	}
	else
	{
		_putchar(28);
		return (0);
	}
}

#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed arguments
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;
	a = n % 10;
	_putchar(a + '0');
	return (n % 10);
}

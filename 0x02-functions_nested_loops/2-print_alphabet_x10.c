#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphbet in lowercase.
 *
 * Return: always 0
 */

void print_alphabet_x10(void)

{
	char num;
	int i = 0;

	while (i <= 9)
	{
		for (num = 'a'; num <= 'z'; num++)
		{
			_putchar(num);
		}

		_putchar('\n');

		i++;
	}
}

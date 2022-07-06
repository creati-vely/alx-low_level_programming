#include "main.h"

/**
 * print_alphabet_x10 -> prints the lowercase alphabets
 */
void print_alphabet_x10(void)
{
	int j;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

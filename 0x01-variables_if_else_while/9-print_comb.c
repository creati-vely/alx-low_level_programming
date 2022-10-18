#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 */

int main(void)
{
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar((ch % 10) + '0');
		if (ch == 9)
			continue;

		putchar(',');
		putchar(' ');
	}


	putchar('\n');

	return (0);
}

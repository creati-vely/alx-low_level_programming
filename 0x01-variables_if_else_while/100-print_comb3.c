#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 01; num1 < 10; num1++)
	{
		for (num2 = 01; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 8)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

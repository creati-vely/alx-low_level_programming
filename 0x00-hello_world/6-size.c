#include <stdio.h>
/**
 * main - Size is not grandeur, and territory
 * does not make a nation
 * Return: Always return 0
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int d;
	float f;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("The size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}


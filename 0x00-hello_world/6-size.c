#include <stdio.h>
/**
 * main - Size is not grandeur, and territory
 * does not make a nation
 * Return: Always return 0
 */

int main(void)
{

	printf("The size of a char is: %zu byte(s)\n", sizeof(char));
	printf("The size of an int is: %zu bytes(s)\n", sizeof(int));
	printf("The size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("The size of a long long int: %zu byte(s)n", sizeof(long long int));
	printf("The size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}


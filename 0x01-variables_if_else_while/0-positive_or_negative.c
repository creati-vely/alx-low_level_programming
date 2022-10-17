#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - if and else
*Return: Return 0
*/
int main(void)
{
	int n = 50;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("50 is positive\n");
	}
	else if (n == 0)
	{
		printf("0 is zero");
	}
	else
	{
		printf("50 is negative");
	}

	return (0);
}

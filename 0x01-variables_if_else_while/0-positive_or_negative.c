#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - if and else
*Return: Return 0
*/ 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
        printf("positive\n");
	}
	else if(n == 0)
	{
        printf("zero");
	}
	else
	{
        printf("negative");
	}
	return (0);
}

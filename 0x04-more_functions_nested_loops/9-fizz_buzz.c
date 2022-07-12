#include "main.h"
/**
 * main - entry point
 *
 * Return: void
 */
int main(void)
{

int p = 100;
i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}

else if (1 % 3 == 0)
{
printf("Fizz");
}

else if (i % 5 == 0)
{
if (i < p)
printf("Bizz");

else
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;


}
printf("\n");
return (0);
}

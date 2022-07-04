#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by new line, to the standard erros.
 * Return: Always 0 (Success) 
 */
int main(void) 
{
write(2, "and that piece od art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

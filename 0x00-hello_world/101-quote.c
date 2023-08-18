#include <unistd.h>
#include <string.h>

/**
 * main - Entry point of the program
 *
 * Return: 1
 */
int main(void)
{
	const char *a = "and that piece of art is useful\"";

	const char *b =  " - Dora Korpar, 2015-10-19\n";

	write(2, a, strlen(a));
	write(2, b, strlen(b));

	return (1);
}

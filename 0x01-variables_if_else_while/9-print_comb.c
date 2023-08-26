#include <stdio.h>
#include <unistd.h>


/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
		putchar(i);
		putchar(j);
			{
			putchar(',');
			write(' ')
			}
		}
	}
	{
		putchar('\n')
	}
	return (0);
}

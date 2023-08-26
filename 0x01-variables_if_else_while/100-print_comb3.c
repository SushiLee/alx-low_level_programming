#include <stdio.h>

/**
 * main - Prints digit combo till 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i,j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 58 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	{
		putchar('\n');
	}

	return (0);
}

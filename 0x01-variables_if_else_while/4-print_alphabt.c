#include <stdio.h>

/**
 * main - Prints all letters except e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int I;
	
	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	{
		putchar('\n');
	}

	return (0);
}

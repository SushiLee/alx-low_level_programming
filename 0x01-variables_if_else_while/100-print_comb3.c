#include <stdio.h>

/**
 * main - Prints digit combo till 89
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	int printed[10][10] = {0};

	for (i = 0; i <= 9; i++)
	{
        	for (j = i + 1; j <= 9; j++)
		{
			if (!printed[i][j])
			{
				putchar('0' + i);
				putchar('0' + j);
				printed[i][j] = 1;

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return 0;
}

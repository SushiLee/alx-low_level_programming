#include <stdio.h>

/**
 * main - Prints all unique combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				if (num1 < 10)
				{
					putchar('0');
				}
				printf("%d", num1);

				putchar(' ');

				if (num2 < 10)
				{
					putchar('0');
				}
				printf("%d", num2);

				if (num1 != 98 || num2 != 99)
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

#include "main.h"

/**
 * print_line - Draws a straight line
 *
 *@n: variable
 *
 * Return: Always
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

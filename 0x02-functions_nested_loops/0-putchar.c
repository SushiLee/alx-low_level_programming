#include <stdio.h>
#include <string.h>
/**
 *Prints _putchar
 * This code just requires me to write comments
 */

int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');
	return (0);
}

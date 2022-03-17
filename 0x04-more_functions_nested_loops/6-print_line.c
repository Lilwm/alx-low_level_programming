#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to run the loop
 */

void print_line(int n)

{
	int k;

if (n > 0)
	{
	for (k = 1 ; k <= n ; k++)
	_putchar('_');
	_putchar('\n');
	}

else
	_putchar('\n');
}


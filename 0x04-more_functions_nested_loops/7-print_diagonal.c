#include "main.h"
/**
 *print_diagonal - draws diagonal lines on the terminal
 *@n: number of times to draw the diagonal lines
 *
 */

void print_diagonal(int n)

{
	int j, k;

	if (n > 0)
	{
		for (j = 0 ; j < n ; j++)
		{
			for (k = 0; k < j ; k++)
				_putchar (' ');
			_putchar ('\\');
			_putchar ('\n');
		}
	}
	else
		_putchar ('\n');
}


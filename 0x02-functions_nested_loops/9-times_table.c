#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */


void times_table(void)

{
	int i, t, y;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (t = 1; t <= 9 ; t++)
		{
			y = (i * t);
			if ((y / 10) > 0)
			{
				_putchar((y / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((y % 10) + '0');

			if (t < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
	_putchar('\n');

	}

}


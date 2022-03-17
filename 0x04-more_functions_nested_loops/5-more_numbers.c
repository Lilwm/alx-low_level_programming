#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 *
 */

void more_numbers(void)

{
	int j;
	int n;

	for (n = 0 ; n <= 10 ; n++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (j > 9)
			_putchar ((j / 10) + '0');	/* e.g 13 prints 1 in this step */
			_putchar ((j % 10) + '0');	/*e.g 13 prints 3 in this step */
		}
	_putchar('\n');

	}

}



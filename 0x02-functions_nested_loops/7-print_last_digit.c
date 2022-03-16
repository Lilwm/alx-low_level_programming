#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 * @n: integer
 * Return: (0)
 */
int print_last_digit(int n)

{
	n = n % 10;	/*declare n to be the remainder*/

		if (n < 0)
			n *= -1;

		_putchar(n + '0');	/* convert n to int */

	return (n);

}

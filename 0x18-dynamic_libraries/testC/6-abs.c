#include "main.h"

/**
 * _abs - writes a function that computes the absolute value of an integer
 * @n: The integer
 *
 * Return: n
 */

int _abs(int n)

{
	if (n < 0)
		n = -(n); /*define r for -ve values*/

	return (n);
}

#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to factor
 * Return: n factorial, else -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

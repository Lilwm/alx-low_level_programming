#include "main.h"
/**
 * _pow_recursion - returns x raised to y
 * @x: base number
 * @y: power
 * Return: x^y , -1 if y<0
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}

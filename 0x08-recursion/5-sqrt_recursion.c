#include "main.h"

/**
 * sqrt_check - Finds the natural square root of an inputted number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: sqrt or -1
 */

int sqrt_check(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (sqrt_check(num, root + 1));
}

/**
 * _sqrt_recursion - returns squareroot of a natural number
 * @n: number to check
 * Return: squareroot else -1
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqrt_check(n, root));
}

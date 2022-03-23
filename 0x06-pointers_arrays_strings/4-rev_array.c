#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;

	i = 0;

	for (j = n - 1 ; i < j; i++, j--)
	{
		int temp = a[i];

		a[i] = a[j];
		a[j] = temp;
	}

}



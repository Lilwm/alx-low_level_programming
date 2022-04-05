#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: number of columns.
 * @height: number of rows.
 * Return: returns a pointer to a 2 dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int row, col, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		matrix[row] = malloc(width * sizeof(int));
		if (matrix[row] == NULL)
		{
			for (col = row - 1; col >= 0; col--)
				free(matrix[col]);
			free(matrix);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			matrix[row][col] = 0;
	}
	return (matrix);
}


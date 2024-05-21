#include "matrix_multiplication.h"

/**
 * _matalloc - Allocates a matrix of
 * the size rows * cols
 * @rows: The number of rows in the matrix
 * @cols: The number of columns in the matrix
 * Return: Pointer to the matrix
 */

int **_matalloc(const size_t rows, const size_t cols)
{
	return (matrix);
}


/**
 * get_matrix - Gets the matrix filled
 * with elements using scanf
 * @rows: The number of rows in the matrix
 * @cols: The number of columns in the matrix
 * Return: Pointer to the matrix
 */

int **get_matrix(const size_t rows, const size_t cols)
{
	int i, j;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
			scanf("%d", &matrix[j][i]);
	}
	return (matrix);
}

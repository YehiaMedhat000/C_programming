#include <stdio.h>

int **_def_matrix(const size_t size);
void get_matrix(int matrix[3][3]);
void print_matrix(int matrix[3][3]);
void multiply_matrix(int matrix1[3][3], int matrix2[3][3], int ret[3][3]);

/**
 * main - Entry point
 * Return: (0) always
 */

int main(int ac, char **av)
{
	int matrix[3][3];
	int ret[3][3];
	int unity[3][3] = {
						{1, 1, 1},
						{1, 1, 1},
						{1, 1, 1}
						};

	get_matrix(matrix);
	multiply_matrix(unity, matrix, ret);
	print_matrix(ret);
	return (0);
}

void get_matrix(int matrix[3][3])
{
	int i, j;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
			scanf("%d", &matrix[j][i]);
	}
}

void print_matrix(int matrix[3][3])
{
	int i, j;

	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3; i++)
			printf("%d ", matrix[j][i]);
		printf("\n");
	}
}

void multiply_matrix(int matrix1[3][3], int matrix2[3][3], int ret[3][3])
{
	int sum, i, j, k, col;

	for (k = 0; k < 3; k++)
	{
		for (i = 0, col = 0; i < 3; i++)
		{
			sum = 0;
			for (j = 0; j < 3; j++)
				sum += matrix1[i][j] * matrix2[j][i];
			/* Put the value */
			ret[k][i] = sum;
		}
	}
}

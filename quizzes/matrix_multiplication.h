#ifndef _MATRIX_
#define _MATRIX_

#include <stdio.h>

/************ Prototypes ************/
int **_matalloc(const size_t rows, const size_t cols);
int **get_matrix(const size_t rows, const size_t cols);
void print_matrix(int matrix[3][3]);
void multiply_matrix(int matrix1[3][3], int matrix2[3][3], int ret[3][3]);

#endif /* _MATRIX_ */

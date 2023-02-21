//
// Created by gereb on 2/21/2023.
//

#ifndef LABOR2_FUNCTIONS_MATRIX_H
#define LABOR2_FUNCTIONS_MATRIX_H
#include <stdlib.h>
#include <stdio.h>
#include "constants.h"

int** allocateMemoryForMatrix1(int rows, int cols);
void allocateMemoryForMatrix2(int rows, int cols, int ***dpMatrix);
void readMatrix(int *pRows, int *pCols, int ***dpArray, const char *input);
void printMatrix(int rows, int cols, int **pMatrix, const char *output);
int minimumValueOfRow(int cols, int *pRow);
int* rowMinimums(int rows, int cols, int **pMatrix);
int minimumValueOfMatrix(int rows, int cols, int **pMatrix);
float averageOfMatrixElements(int rows, int cols, int **pMatrix);
void deallocateMemoryForMatrix(int rows, int ***dpMatrix);



#endif //LABOR2_FUNCTIONS_MATRIX_H

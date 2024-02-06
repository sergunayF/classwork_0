#pragma once

typedef struct PtrArray2Dim { int** arr; } PtrArray2Dim;

int** Array2Dim_Create(int row, int cols);

int Array2Dim_setValue(int*** arr, int cols, int row, int result);

int Array2Dim_getValue(int** arr, int row, int cols);

int Array2Dim_Destroy(int** arr, int row);
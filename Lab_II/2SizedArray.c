#include <stdio.h>
#include <stdlib.h>
#include "2SizedArray.h"

int** Array2Dim_Create(int row, int cols) {

	int** arr1 = malloc(cols * sizeof(int*));

	if (!arr1) {
		printf("ERR_ALLOC_MEM");
		return 1;
	}

	int* arr2 = malloc(row * cols * sizeof(int));

	if (!arr2) {
		printf("ERR_ALLOC_MEM");
		free(arr1);
		return 1;
	}

	int* tmp = arr2;
	for (int i = 0; i < cols; i++) {
		arr1[i] = tmp;
		tmp += row;
	}

	return arr1;
}

int Array2Dim_setValue(int*** arr, int cols, int row, int result) {

	if ((*arr) == NULL || row < 0 || cols < 0) {
		printf("\n\nERROR!");
		return 0;
	}

	(*arr)[row][cols] = result;
	
	return 1;
}

int Array2Dim_getValue(int** arr, int row, int cols) {

	if (arr == NULL || row < 0 || cols < 0) {
		printf("\n\nERROR!");
		return 0;
	}

	return arr[row][cols];
}

int Array2Dim_Destroy(int** arr, int row) {
	free(**arr);
	free(*arr);
	return 1;
}

#include <stdio.h>
#include <stdlib.h>
#include "2SizedArray.h"

#define X_SIZE 10
#define Y_SIZE 10

int main() {

	system("color a");

	PtrArray2Dim* arr = Array2Dim_Create(X_SIZE, Y_SIZE);
	int i, j;

	for (i = 0; i < X_SIZE; i++) {
		for (j = 0; j < Y_SIZE; j++) {
			Array2Dim_setValue(&arr, i, j, i * j);
		}
	}

	for (i = 0; i < X_SIZE; i++) {
		for (j = 0; j < Y_SIZE; j++) {
			printf("%02d ", Array2Dim_getValue(arr, i, j));
		}
		printf("\n");
	}

	Array2Dim_Destroy(arr, X_SIZE);

	return 0;
}
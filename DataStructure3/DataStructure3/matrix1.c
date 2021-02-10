#include <stdio.h>
#define ROW 3
#define COL 3

void matrix_transpose(int A[ROW][COL], int B[ROW][COL])
{
	for (int r = 0; r < ROW; r++)
		for (int c = 0; c < COL; c++)
			B[c][r] = A[r][c];
}

void matrix_print(int A[ROW][COL])
{
	printf("=====================\n");
	for (int r = 0; r < ROW; r++) {
		for (int c = 0; c < COL; c++)
			printf("%d ",A[r][c]);
		printf("\n");
	}
	printf("=====================\n");
}

int main()
{
	int array1[ROW][COL] = { {2,3,0},{8,9,1},{7,0,5} };
	int array2[ROW][COL];

	matrix_transpose(array1, array2);
	matrix_print(array1);
	matrix_print(array2);
	return 0;
}
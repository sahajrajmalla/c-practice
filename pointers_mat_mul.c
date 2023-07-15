#include <stdio.h>

void multiplyMatrices(int *mat1, int *mat2, int *result, int rows1, int cols1, int cols2) {
    int i, j, k;

    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            *(result + i * cols2 + j) = 0;

            for (k = 0; k < cols1; k++) {
                *(result + i * cols2 + j) += *(mat1 + i * cols1 + k) * *(mat2 + k * cols2 + j);
            }
        }
    }
}

void displayMatrix(int *matrix, int rows, int cols) {
    int i, j;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];

    multiplyMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], 2, 3, 2);
    displayMatrix(&result[0][0], 2, 2);

    return 0;
}

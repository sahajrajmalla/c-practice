#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void mat_add(int matrix_a[MAX_ROWS][MAX_COLS], int matrix_b[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int row, int cols)  {
     // perform matrix addition
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }
}

int main () {
    int row, cols;
    int matrix_a[MAX_ROWS][MAX_COLS], matrix_b[MAX_ROWS][MAX_COLS], result[MAX_ROWS][MAX_COLS];
    
    printf("Input the rows and column: ");
    scanf("%d %d", &row, &cols);
    
    printf("Enter the element for matrix A: \n");
    for (int i = 0; i< row; i++)  {
        for (int j = 0; j < cols; j++) {
            printf("Enter %d row, %d col: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    printf("Enter the element for matrix B: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter %d row, %d col: ", i, j);
            scanf("%d", &matrix_b[i][j]);
        }
    }
    
    mat_add(matrix_a, matrix_b, result, row, cols);
    
    printf("The resultant matrix: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}
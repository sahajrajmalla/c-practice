#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLUMNS 100

void transpose(int matrix_a[MAX_ROWS][MAX_COLUMNS], int result[MAX_ROWS][MAX_COLUMNS], int row, int column)  {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[j][i] = matrix_a[i][j];

        }
    }
}

void display(int matrix_a[MAX_ROWS][MAX_COLUMNS], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d \t", matrix_a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix_a[MAX_ROWS][MAX_COLUMNS], result[MAX_ROWS][MAX_COLUMNS];
    int row, column;
    
    printf("Enter the row and column: ");
    scanf("%d %d", &row, &column);
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("Input %d row, %d column: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
        
    }
    
    transpose(matrix_a, result, row, column);
    
    printf("There is the tranposed matrix: \n");
    display(result, column, row);
    
    return 0;
    
}
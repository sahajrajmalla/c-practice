#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLUMNS 10

int main () {
    int n1, m1, n2, m2;
    int matrix_a[MAX_ROWS][MAX_COLUMNS], matrix_b[MAX_ROWS][MAX_COLUMNS], result[MAX_ROWS][MAX_COLUMNS];
    
    printf("Enter the dimension of the matrix(n*m) of matrix A: ");
    scanf("%d %d", &n1, &m1);
    
    printf("Enter the dimension of the matrix(n*m) of matrix B: ");
    scanf("%d %d", &n2, &m2);
    

    printf("Enter the elements for matrix A: \n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            printf("Enter the element for %d row %d col: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    printf("Enter the elements for matrix B: \n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            printf("Enter the element for %d row %d col: ", i, j);
            scanf("%d", &matrix_b[i][j]);
        }
        
    }
    

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                result[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
    
    printf("The resultant matrix: \n");
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("%d \t", result[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
}
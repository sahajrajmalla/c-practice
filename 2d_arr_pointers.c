#include <stdio.h>

#define MAX_SIZE 10

int **allocate(int n, int m) {
    int **p;
    
    p = (int **) calloc (n, sizeof(int *));
    
    for (int i = 0; i < m; i++) {
        p[i] = (int *) calloc (m, sizeof(int));
    }
    
    return(p);
}

int main () {
    int **matrix_a;
    int n, m;

    printf("Enter the dimension of the matrix: ");
    scanf("%d %d", &n, &m);

    matrix_a = allocate(n, m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter the element for %d row, %d col: ", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d \t", matrix_a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}
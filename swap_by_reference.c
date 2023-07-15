#include <stdio.h>

void swap(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main () {
    int a = 1, b = 2;
    
    swap(&a, &b);
    
    printf("a = %d \n", a);
    printf("b = %d", b);
    
    return 0;
}
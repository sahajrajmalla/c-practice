#include <stdio.h>

void main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    
    ptr = &arr[0];
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *(ptr+i));
    }
    
}
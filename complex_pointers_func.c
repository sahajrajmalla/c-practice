#include <stdio.h>

typedef struct {
    float real;
    float img;
} complex;

complex add_complex(complex *a, complex *b) {
    complex result;
    
    result.real = a -> real + b -> real;
    result.img = a -> img + b -> img;
    
    return (result);
}

int main () {
    complex a, b, result;
    
    printf("For first complex number: \n");
    scanf("%f %f", &a.real, &a.img);
    
    printf("For second complex number: \n");
    scanf("%f %f", &b.real, &b.img);
    
    result = add_complex(&a, &b);
    
    printf("Result = %f + %fi", result.real, result.img);
    
    return 0;
    
}
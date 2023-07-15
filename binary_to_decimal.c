/*
    File: binary_to_decimal.c
    Author: Sahaj Raj Malla
    Purpose: To convert a binary number to decimal number
    Date: 2021 January 9
*/

#include <stdio.h>

void binary_to_decimal(int binary)  {
    int decimal = 0, base = 1, remainder;
    while (binary > 0)  {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }
    printf("The decimal equivalent is %d\n", decimal);
}

int main ()  {
    int binary, decimal = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    binary_to_decimal(binary);
    return 0;

}
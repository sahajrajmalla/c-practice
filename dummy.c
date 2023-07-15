// Write a C program that reads an integer number and finds the sum of the entire digit until it reduces to a single digit using a function.
// For example, if the number is 12345, then the sum of all digits is 15. Since 15 is not a single digit number, the sum of all digits is 6.

#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    if (sum > 9)
        return sumOfDigits(sum);
    else
        return sum;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits: %d\n", sumOfDigits(n));

    return 0;
}


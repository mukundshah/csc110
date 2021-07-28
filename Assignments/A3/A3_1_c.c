/*
Write a C program to find sum of digits of a number using recursive function
*/

#include <stdio.h>

unsigned int sumOfDigits(unsigned int);

int main()
{
    unsigned int N, result;

    printf("Enter a positive number: ");
    scanf("%u",&N);

    result=sumOfDigits(N);

    printf("The sum of the digits of %d is: %u",N,result);

    return 0;
}

unsigned int sumOfDigits(unsigned int n){
    if ( n == 0 )
        return 0;
    return (n % 10 + sumOfDigits(n / 10));
}

/*
Enter a positive number: 544
The sum of the digits of 544 is: 13
*/
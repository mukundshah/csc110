/*
Write a C program to find nth Fibonacci number using recursive function.
*/

#include <stdio.h>

unsigned int fibonacci(unsigned int);

int main()
{
    int N;
    unsigned int result;

    printf("Enter the value of 'n' for nth Fibonacci number: ");
    scanf("%d",&N);

    result=fibonacci(N);

    printf("The %dth Fibonacci number is: %u",N,result);

    return 0;
}

unsigned int fibonacci(unsigned int n){
    if ( n == 0 )
        return 0;
    else if ( n == 1 )
        return 1;
    else
        return ( fibonacci(n-1) + fibonacci(n-2) );
}

/*
Enter the value of 'n' for nth Fibonacci number: 38
The 38th Fibonacci number is: 39088169
*/
//Write a program to calculate the factorial of a number.

#include <stdio.h>

int main (void){

    int num;
    unsigned long long factorial = 1;
    printf("Enter a number to calculate factorial of (max limit: 20): ");
    scanf("%d", &num);

    for (int i = 1; i<=num; i++){
        factorial *= i;
    }

    printf("The factorial of %d (%d!) = %llu", num, num, factorial);

    return 0;
}

/******** INPUT ***********/
/*
Enter a number to calculate factorial of (max limit: 20): 20
*/
/******** OUTPUT **********/
/*
The factorial of 20 (20!) = 2432902008176640000
*/
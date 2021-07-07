//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>
#include <math.h>

int main (void){

    int nthTerm, count=0;
    unsigned long sum = 0;
    printf("This program calculates the sum of series 1+2+4+8+...+nth term.\nEnter the value for n (positive): ");
    scanf("%d", &nthTerm);

    while(count<nthTerm)
    {
        sum = sum + pow(2, count);
        count++;
    }
    printf("Sum of the series for upto %dth term = %lu", nthTerm,sum);

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
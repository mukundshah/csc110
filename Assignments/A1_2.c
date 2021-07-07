//Write a C program that asks user to read an integer number n and calculate sum of al natural numbers from 1 to n

#include <stdio.h>

int main (void){

    int num;
    unsigned long sum = 0;
    printf("To find the sum of first n natural numbers, enter the value for n: ");
    scanf("%d", &num);

    for (int i = 1; i<=num; i++){
        sum += i;
    }

    printf("The sum of first %d natural number = %lu", num, sum);

    return 0;
}

/******** INPUT ***********/
/*
To find the sum of first n natural numbers, enter the value for n: 150
*/
/******** OUTPUT **********/
/*
The sum of first 150 natural number = 11325
*/
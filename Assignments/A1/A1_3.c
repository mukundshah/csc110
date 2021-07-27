//Write a C program to find sum of cubes of natural numbers from 1 to ‘n’ where n is user input

#include <stdio.h>

int main (void){

    int num;
    unsigned long sum = 0;
    printf("To find the sum of cubes of first n natural numbers, enter the value for n: ");
    scanf("%d", &num);

    for (int i = 1; i<=num; i++){
        sum += (i*i*i);
    }

    printf("The sum of cubes of first %d natural number = %lu", num, sum);

    return 0;
}

/******** INPUT ***********/
/*
To find the sum of cubes of first n natural numbers, enter the value for n: 15 
*/
/******** OUTPUT **********/
/*
The sum of cubes of first 15 natural number = 14400
*/
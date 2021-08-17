/*
Date: May 13, 2021
Lab 1: Write a program that reads a number and tests whether it is multiple of 7 or not.
*/

#include <stdio.h>
int main(){
    int n, r;
    printf("Enter any number (n): ");
    scanf("%d", &n);
    r= n%7;
    if(r==0)
        printf("The numer is mutiple of 7.");
    else
        printf("The number is not multiple of 7.");
    return 0;
}

/*
----OUTPUT----
Enter any number (n): 34
The number is not multiple of 7.

Enter any number (n): 21
The number is multiple of 7.
*/

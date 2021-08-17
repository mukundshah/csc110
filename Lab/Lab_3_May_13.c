/*
Date: May 13, 2021
Lab 2: Write a C program that reads a two digit number and finds its sum of digits.
For example, if number is 76 then its digit sum is 13.
*/

#include <stdio.h>

int main(){
    int n, s, d1, d2;
    printf("Enter any two digit number: ");
    scanf("%d", &n);
    d1 = n%10;
    d2 = n/10;
    s = d1 + d2;
    printf("The sum of digits = %d", s);
    return 0;
}

/*
----OUTPUT----
Enter any two digit number: 76
The sum of digits = 13

Enter any two digit number: 97
The sum of digits = 16
*/

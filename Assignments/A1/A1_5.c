//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>

int main (void){

    int dec, rem;
    long long unsigned int bin = 0, p = 1;
    printf("Enter a decimal number in range 0 - 1048575: ");
    scanf("%d", &dec);

    while(dec!=0){
        rem = dec % 2;
        dec /= 2;
        bin += rem * p;
        p *= 10;
    }
    
    printf("%llu is the binary equivalent of entered number.",bin) ;
    return 0;
}

/******** INPUT ***********/
/*
Enter a decimal number in range 0 - 1048575: 1458
*/
/******** OUTPUT **********/
/*
10110110010 is the binary equivalent of entered number.
*/
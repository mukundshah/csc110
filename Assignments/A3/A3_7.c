/*
Write a C program that reads a decimal number and convert it into equivalent 
binary number using function called decitobin () which takes decimal number 
as argument and returns binary equivalent.
*/
#include <stdio.h>
#define binary long long unsigned int

binary decitobin(int dec);

int main()
{
    int dec;
    binary result;

    printf("Enter a decimal number in range 0 - 1048575: ");
    scanf("%d", &dec);

    result = decitobin(dec);
    printf("%llu is the binary equivalent of entered number.", result);
    
    return 0;
}

int rem;
binary bin = 0, p = 1;
binary decitobin(int dec){
    if (dec){
        rem = dec % 2;
        bin += rem * p;
        p *= 10;
        decitobin(dec / 2);
    }
    else
        return bin;
    return bin;
}
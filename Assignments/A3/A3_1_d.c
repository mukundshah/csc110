/*
Write a C program to find reverse of a number using recursive function.
*/

#include <stdio.h>

unsigned int reverseNum(unsigned int);

int main()
{
    unsigned int N, result;

    printf("Enter a positive number: ");
    scanf("%u",&N);

    result=reverseNum(N);

    printf("The reverse of %u is: %u",N,result);

    return 0;
}
int rev=0,rem;
unsigned int reverseNum(unsigned int n){
    if(n){
        rem=n%10;
        rev=rev*10+rem;
        reverseNum(n/10);
    }
    else
        return rev;
    return rev;
}

/*
Enter a positive number: 544
The sum of the digits of 544 is: 13
*/
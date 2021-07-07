//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>

int main() {
    int  a=0, b=1, c=0, n=20;
    
    printf("%d, %d, ",a,b);
    for(int k=0; k<=n-2; k++){
        c = a+b;
        a = b;
        b = c;
        printf("%d, ",c);
    }
    
    return 0;
}
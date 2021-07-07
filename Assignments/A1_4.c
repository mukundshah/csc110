//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>

int main (void){

    int num, rem, sum=0, factorial=1;
    printf("Enter a number to check if it's strong or not: ");
    scanf("%d", &num);

    int num_temp = num;
    while(num_temp!=0){
        rem = num_temp % 10;
        num_temp /= 10;
        for (int i = 1; i<=rem; i++){
            factorial *= i;
        }
        sum += factorial;
        factorial=1;
    }
    (sum == num) ? 
        printf("%d is a strong number.",num) : 
        printf("%d is not a strong number.",num);    

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
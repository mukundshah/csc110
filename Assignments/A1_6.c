//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>

int main (void){

    int int_start, int_end, count=0;
    printf("This program prints the prime numbers between the inetrval n1 and n2.\nEnter the starting positive number for the interval (n1): ");
    scanf("%d", &int_start);
    printf("Enter the ending positive number for the interval (n2): ");
    scanf("%d", &int_end);

    printf("The prime numbers in the given intervals are:\n");
    if(int_start != 0 && int_start != 1 && int_end != 0 && int_end != 1 ){
        for (int i = int_start; i <= int_end; i++){
            for (int j = 1; j <= i; j++){
                if(i%j==0)
                    count++;
            }
            if(count==2)
                printf("%d, ", i);
            count = 0;
        }
    }
    else
        printf("0 and 1 are not prime numbers.");
    return 0;
}

/******** INPUT ***********/
/*
This program prints the prime numbers between the given inetrval.
Enter the starting positive number for the interval (n1): 2
Enter the ending positive number for the interval (n2): 50
*/
/******** OUTPUT **********/
/*
The prime numbers in the given intervals are:
2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,
*/
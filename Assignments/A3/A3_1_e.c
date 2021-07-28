/*
Write a C program to print prime numbers from 200 to 300 using function.
*/

#include <stdio.h>

void printPrimeNumbers(int, int);
int checkAndPrintPrime(int);

int main()
{
    int s,e;
    printf("This program prints prime number between a given range.\n");
    printf("Enter the starting value: ");
    scanf("%d", &s);
    printf("Enter the ending value: ");
    scanf("%d", &e);

    printf("The prime numbers between %d and %d are:\n",s,e);
    printPrimeNumbers(s,e);
    
    return 0;
}

void printPrimeNumbers(s,e){
    int result;
    for (int i = s; i<=e;i++){
        result = checkAndPrintPrime(i);
        if (result)
            printf("%d, ", result);
        else
            continue;
    }
}

int checkAndPrintPrime(int n){
    int flag = 0;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            flag = 1;
        break;
        }
    }

    if (n == 1 || n == 0) {
        printf("0 & 1 are neither prime nor composite.\n");
    } 
    else {
        if (flag == 0)
        return n;
    }

}

/*
Enter the starting value: 200
Enter the ending value: 300
The prime numbers between 200 and 300 are:
211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
*/
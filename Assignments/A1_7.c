//A number is called strong if it is equal to sum of factorial of its digits is equal to number itself.
//For example, the 145 is strong number because 145 = 1!+4!+5!. 
//Write a C program that reads a number and tests whether it is strong or not.

#include <stdio.h>

int main (void){

    int m, n, count=1;
    printf("This program calculates m^n.\nEnter the value for m (positive): ");
    scanf("%d", &m);
    printf("Enter the value for n (positive): ");
    scanf("%d", &n);

    float m_n = 1;
    if(n != 0 && n>0){
        while(count<n+1)
        {
            m_n = m_n * m;
            count++;
        }
        printf("Ans: %d^%d = %d", m, n, m_n);
    }
    else if(n != 0 && n<0){
        n = n * -1;
        while(count<n+1)
        {
            m_n = m_n * (1 / (float)m);
            count++;
        }
        printf("Ans: %d^-%d = %f", m, n, m_n);
    }
    else if(m != 0 && n == 0)
        printf("Ans: %d^%d = %d", m, n, 1);
    else
        printf("Ans: 0^0 is an indeterminate form.");
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
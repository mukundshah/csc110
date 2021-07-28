/*
Write a C program that find the sum and product of two 3*3 matrices using 
function.
*/

#include <stdio.h>
#define S 3

void printProductOfTwoMatrices(int x[S][S], int y[S][S]);
void printSumOfTwoMatrices(int x[S][S], int y[S][S]);

int main(){
    int A[S][S], B[S][S];
    printf("This program calculates sum and product of two 3x3 matrices.\n");
    printf("Enter matrix A:\n");
    for(int i = 0; i<S; i++)
        for(int j = 0; j<S; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for(int i = 0; i<S; i++)
        for(int j = 0; j<S; j++)
            scanf("%d", &B[i][j]);

    printSumOfTwoMatrices(A, B);
        printf("\n");
    printProductOfTwoMatrices(A, B);
}

void printSumOfTwoMatrices(int x[S][S], int y[S][S]){
    int sum[3][3];
    printf("The sum of the matrices is:\n");
    for(int i = 0; i<S; i++){
        for(int j = 0; j<S; j++){
            sum[i][j] = x[i][j] + y[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void printProductOfTwoMatrices(int x[S][S], int y[S][S]){
    int product[3][3],temp=0;
    printf("The product of the matrices is:\n");
    for(int i = 0; i<S; i++){
        for(int j = 0; j<S; j++){
            for (int k = 0; k<S; k++){
                temp = temp + x[i][k] * y[k][j];
                product[i][j] = temp;
            }
            temp = 0;
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

/*
Enter matrix A:
1 2 3
4 5 6
7 8 9
Enter matrix B:
1 2 3
4 5 6
7 8 9
The sum of the matrices is:
2 4 6
8 10 12
14 16 18
The sum of the matrices is:
30 36 42
66 81 96 
102 126 150
*/
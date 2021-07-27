/*
Write a C program that reads a 3*3 matrix and finds the sum of diagonal elements and nondiagonal elements
*/

#include <stdio.h>
int main()
{
    int M[3][3];
    int sumOfDiagonalElements=0, sumOfNonDiagonalElements=0, sumOfAll=0;
    
    printf("Enter 3 X 3 matrix:\n");
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j = 0; j<3; j++){
            sumOfAll = sumOfAll + M[i][j];
            if(i == j)
            sumOfDiagonalElements = sumOfDiagonalElements + M[i][j];
        }
    }
    sumOfNonDiagonalElements = sumOfAll-sumOfDiagonalElements;
    
    printf("Sum of diagonal elemnets = %d",sumOfDiagonalElements);
    printf("\n");
    printf("Sum of non-diagonal elemnets = %d",sumOfNonDiagonalElements);
    
    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter 3 X 3 matrix:
1 2 3
4 5 6
7 8 9
Sum of diagonal elemnets = 15
Sum of non-diagonal elemnets = 30

*/
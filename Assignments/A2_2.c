/*
Write a C program to find sum and product of two 3*3 matrices
*/

#include<stdio.h>

int main(void)
{
    int N=3, i, j, k, M1[N][N], M2[N][N], sum[N][N], product[N][N], c=0;
    printf("Enter the first matrix in row order here:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &M1[i][j]);
        }
    }
    printf("Enter the second matrix in row order here:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &M2[i][j]);
        }
    }
    printf("\nThe sum matrix is:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            sum[i][j]=M1[i][j]+M2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nThe product matrix is:\n");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            for(k=0;k<N;k++)
            {
                c=c+M1[i][k]*M2[k][j];
                product[i][j]=c;
            }
            c = 0;
            printf("%d ", product[i][j]); 
        }
        printf("\n");
    }
}

/*
----------------------------------OUTPUT-----------------------------------

Enter the first matrix in row order here:
1 2 3
4 5 6
7 8 9
Enter the second matrix in row order here:
1 2 3
4 5 6
7 8 9

The sum matrix is:
2 4 6 
8 10 12 
14 16 18 

The product matrix is:
30 36 42 
66 81 96 
102 126 150 

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, count;
    printf("For m x n matrix, \nEnter the value of m (rows): ");
    scanf("%d", &m);
    printf("Enter the value of n (columns): ");
    scanf("%d", &n);

    int **mat;
    int **tran;

    mat = (int **)malloc(m * sizeof(int *));
    for(int i = 0; i<m; i++)
        *(mat+i) = (int *)malloc(n * sizeof(int));

    printf("Enter %d x %d  matrix:\n", m, n);
    for(int i = 0; i<m; i++)
        for(int j = 0; j<n; j++)
            scanf("%d", (*(mat+i)+j));


    printf("The transpose of the entered matrix is:\n");

    tran = (int **)malloc(n * sizeof(int *));
    for(int i = 0; i<n; i++)
        *(tran+i) = (int *)malloc(m * sizeof(int));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            *(*(tran + i) + j) = *(*(mat + j) + i);
            printf("%d ", *(*(tran + i) + j));
        }
        printf("\n");
    }
    return 0;
}
/*
For m x n matrix, 
Enter the value of m (rows): 2  
Enter the value of n (columns): 3
Enter 2 x 3  matrix:
1 2 3
4 5 6
The transpose of the entered matrix is:
1 4 
2 5
3 6 
*/ 

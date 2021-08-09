/*
1.	What is dynamic memory allocation?
Ans: The process of allocating and freeing memory in a program at run time is known as 
Dynamic Memory Allocation. This process reserves the memory required by the program and 
allows the program to utilize the memory by deallocating, reallocating or completely 
freeing up the memory.
*/



/*
Write a C program that reads ‘n’ numbers and sort them in ascending order using 
dynamic memory allocation. Use malloc function
*/

#include <stdio.h>
#include <stdlib.h>

int sort(int *arr, int n){
    int temp;
    for(int i =0; i<n; i++){
        for (int j = 0; j<(n-1-i); j++){
            if(*(arr+j)>*(arr+(j+1))){
                temp = *(arr+j);
                *(arr + j) = *(arr + (j + 1));
                *(arr + (j + 1)) = temp;
            }
        }
    }
    return 0;
}

int main(){
    int *arr, n;
    printf("Enter the number of numbers you want to read (n): ");
    scanf("%d", &n);

    arr = (int *)malloc(n*sizeof(int));
    printf("Enter the %d number(s) : ", n);
    for (int i = 0; i < n;i++){
        scanf("%d", (arr + i));
    }
    sort(arr, n);
    printf("Sorted in ascending order: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", *(arr + i));

    return 0;
}

/*
Enter the number of numbers you want to read (n): 5
Enter the 5 number(s) : 558 553 1102 7 0
Sorted in ascending order: 0, 7, 553, 558, 1102,
*/
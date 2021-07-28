/*
Write a C program that prints elements of array using recursive function
*/

#include <stdio.h>

void printArray(int array[], int size, int index);

int main(){
    int N;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    int arr[N];
    printf("Enter the elements of array: ");
    for (int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    printArray(arr, N, 0);
}

void printArray(int array[], int size, int index){
    if(index>=size)
        return;
    printf("%d, ",array[index]);
    printArray(array, size, index + 1);
}

/*
Enter the size of array: 10
Enter the elements of array: 5 7 8 99 55 44 75 88 5 0
The elements of the array are:
5, 7, 8, 99, 55, 44, 75, 88, 5, 0,
*/

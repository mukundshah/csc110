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
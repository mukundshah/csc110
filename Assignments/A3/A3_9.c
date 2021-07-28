/*
An array can hold the digits of a number. For example, the digit of the 
number 32053 are stored in the array {3,2,0,5,3}. Write a function called 
repsEqual that takes an array and an integer and returns 1 if the array 
contains only the digits of the numbers in the same order that appear in 
the number. Otherwise it returns 0
*/

#include <stdio.h>
int sizeOfArray;
int repsEqual(int arr[], int num);

int main(){
    int num;
    printf("Enter the positive number: ");
    scanf("%d",&num);

    printf("How many digits you want in array? : ");
    scanf("%d", &sizeOfArray);

    int arr[sizeOfArray];
    printf("Enter the digits in  array: ");
    for (int i = 0; i < sizeOfArray;i++)
        scanf("%d", &arr[i]);

    printf("%d", repsEqual(arr, num));

    return 0;
}

int repsEqual(int arr[], int num){
    int temp = 0;
    for (int i = 0; i < sizeOfArray;i++){
        temp = temp * 10 + arr[i];
    }

    if(temp == num)
        return 1;
    else
        return 0;
}

/*
Enter the positive number: 32053
How many digits you want in array? : 5
Enter the digits in  array: 3 2 0 5 3
1
*/

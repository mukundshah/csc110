/*
A non-empty array a of length n is called an array of all possibilities if it 
contains all numbers between 0 and one less than array size. Write a method 
named isAllPossibilities that accepts an integer array and returns 1 if the array 
is an array of all possibilities, otherwise it returns 0. 
For examples a[] = {0,4,1,2,3} an array of all possibilities.
*/

#include <stdio.h>

int isAllPossibilities();
int main()
{
    int sizeOfArray;
    printf("Enter the size of array: ");
    scanf("%d",&sizeOfArray);

    int numbers[sizeOfArray];

    printf("Enter the elements of array (separated by space): \n");
    for(int i=0; i<sizeOfArray; i++){
        scanf("%d",&numbers[i]);
    }

    printf("\n");
    printf("%d",isAllPossibilities(numbers, sizeOfArray));

    return 0;
}

int isAllPossibilities(int array[], int size){

    int res = 1;

    int temp;
    for(int i=0; i< size; i++){
        for(int j= i+1; j<size; j++){
            if(array[i]>array[j]){
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            }
        }
    }

    for(int i = 0; i < size; i++){
        if(array[i]>=0 && array[i]<size && array[i] != array[i+1])
            res = 1;
        else {
            res = 0;
            break;
        }
    }

    return res;

}


/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space): 
0 4 1 2 3

1

*/


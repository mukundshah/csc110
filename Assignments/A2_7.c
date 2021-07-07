/*
Write a C program that reads ‘N’ numbers and sort them in ascending order,
*/

#include <stdio.h>
int main()
{
    int sizeOfArray;
    
    printf("Enter the size of array: ");
    scanf("%d",&sizeOfArray);
    
    int numbers[sizeOfArray], temp;
    printf("Enter the elements of array (separated by space): \n");
    for(int i=0; i<sizeOfArray; i++){
         scanf("%d",&numbers[i]);
    }
    
    for(int i=0; i< sizeOfArray; i++){
        for(int j= i+1; j<sizeOfArray; j++){
            if(numbers[i]>numbers[j]){
            temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
            }
        }
    }

    printf("\nIn ascending order (separated by space): [");
    for(int i=0; i<sizeOfArray; i++){
        printf("%d ", numbers[i]);
    }
    printf("]");
   
    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space):
55 44 56 0 1

In ascending order (separated by space): [0 1 44 55 56 ]

*/
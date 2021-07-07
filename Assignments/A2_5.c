/*
Write a C program that reads N numbers in an array and then find the largest and smallest 
element
*/

#include <stdio.h>
int main()
{
    int sizeOfArray;
    int largeNumber, smallNumber;
    
    printf("Enter the size of array: ");
    scanf("%d",&sizeOfArray);
    
    int numbers[sizeOfArray];
    printf("Enter the elements of array (separated by space): \n");
    for(int i=0; i<sizeOfArray; i++){
         scanf("%d",&numbers[i]);
    }
    
    smallNumber = largeNumber = numbers[0];
    
    for(int i=0; i<sizeOfArray; i++){
        if(largeNumber < numbers[i])
            largeNumber = numbers[i];
        if(smallNumber > numbers[i])
            smallNumber = numbers[i];
    }
    
    printf("Largest number in the array = %d",largeNumber);
       printf("\n");
    printf("Smallest number in the array = %d",smallNumber);
 
    
    
    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space): 
5 1 8 9 0
Largest number in the array = 11
Smallest number in the array = 0

*/

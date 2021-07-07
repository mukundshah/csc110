/*
Write a C program that reads N numbers in an array and then find prime numbers in that array
*/

#include <stdio.h>
int main()
{
    int sizeOfArray, count=0;
    int hasZeroOrOne = 0;
    
    printf("Enter the size of array: ");
    scanf("%d",&sizeOfArray);
    
    int numbers[sizeOfArray];
    printf("Enter the elements of array (separated by space): \n");
    for(int i=0; i<sizeOfArray; i++){
         scanf("%d",&numbers[i]);
    }
    

    printf("\nThe prime numbers are (separated by space): [");
    for(int i=0; i<sizeOfArray; i++){
        if(numbers[i] != 0 && numbers[i] != 1){
       
            for (int j = 1; j <=  numbers[i]; j++){
                if(numbers[i]%j==0)
                    count++;
            }
            if(count==2)
                printf("%d ", numbers[i]);
            count = 0;
        }
        else
        hasZeroOrOne = 1;
    }
    printf("]");
    if(hasZeroOrOne)
        printf("\n0 and 1 are not prime numbers.\nYou're seeing this because the given array contains '0' or '1' or both.");
    
    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space): 
0 2 3 1 6

The prime numbers are (separated by space): [2 3 ]
0 and 1 are not prime numbers.
You're seeing this because the given array contains '0' or '1' or both.

*/

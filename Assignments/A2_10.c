/*
An array is defined to be odd-heavy if it contains at least one odd element and
every element whose value is odd is greater than every even-valued element. 
So {11, 4, 9, 2, 8} is odd-heavy because the two odd elements (11 and 9) are 
greater than all the even elements. And {11, 4, 9, 2, 3, 10} is not odd-heavy because 
the even element 10 is greater than the odd element 9. 
Write a C program that accepts an integer array and returns 1 if the array is odd-heavy; 
otherwise it returns 0.
*/

#include <stdio.h>

int isOddHeavy();
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

    printf("%d",isOddHeavy(numbers, sizeOfArray));
    
    return 0;
}

int isOddHeavy(int array[], int size){
    
    int res = 1;

    for(int i = 0; i < size; i++){
        if(array[i]%2 != 0){
            for(int j = 0; j<size; j++){
                if(array[j]%2 == 0){
                    if(array[i]<array[j]){
                        res = 0;
                        break;
                    }
                }
            }
        }
    }

    return res;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space): 
11 4 9 2 8
1

Enter the size of array: 6
Enter the elements of array (separated by space): 
11 4 9 2 3 10
0


*/

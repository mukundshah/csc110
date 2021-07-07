/*
Two numbers are called twin prime if they are prime and their difference is no more than 2. Write 
a C program reads ‘N’ numbers in an array and check whether the array contains twin primes or 
not.
*/

#include <stdio.h>
int main()
{
    int sizeOfArray;
    
    printf("Enter the size of array: ");
    scanf("%d",&sizeOfArray);
    
    int numbers[sizeOfArray], primes[sizeOfArray];
    int index = 0, countFactors = 0, countTwinPrimes = 0;
    
    printf("Enter the elements of array (separated by space): \n");
    for(int i=0; i<sizeOfArray; i++){
         scanf("%d",&numbers[i]);
    }
    
    for(int i=0; i<sizeOfArray; i++){
        if(numbers[i] != 0 && numbers[i] != 1){
        
            for (int j = 1; j <=  numbers[i]; j++){
                if(numbers[i]%j==0)
                    countFactors++;
            }
            if(countFactors==2)
            {
                primes[index]=numbers[i];
                index++;
            }
            countFactors = 0;
        }
    }

    int temp;
    for(int i=0; i< index; i++){
        for(int j= i+1; j<index; j++){
            if(primes[i]>primes[j]){
            temp = primes[i];
            primes[i] = primes[j];
            primes[j] = temp;
            }
        }
    }

    for(int j=0; j<(index-1); j++){
        if((primes[j+1]-primes[j])<=2 && (primes[j+1]-primes[j]) != 0 )
            countTwinPrimes++;
    }

    if(countTwinPrimes>0)
        printf("The array has twin-primes.");
    else
        printf("The array doesn't contain twin primes.");
    return 0;
}


/*
----------------------------------OUTPUT-----------------------------------

Enter the size of array: 5
Enter the elements of array (separated by space): 
0 5 7 1 2

The array has twin-primes.


*/

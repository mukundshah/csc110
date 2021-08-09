#include <stdio.h>
#include <math.h>

int sizeOfArray;
int countSquarePairs(int arr[]);
int isPerfectSquare(int);

int main(){
    printf("Enter the size of the array : ");
    scanf("%d", &sizeOfArray);

    int numbers[sizeOfArray];
    printf("Enter the elemnets of the array : ");
    for (int i = 0; i < sizeOfArray; i++)
        scanf("%d", &numbers[i]);

    int result = countSquarePairs(numbers);
    printf("The numbers of square pairs can be made are: %d", result);
}

int isPerfectSquare(int num){
    float s = sqrt(num);
    return (s == ((int)s)) ? 1 : 0;
}
int countSquarePairs(int arr[]){
    int count = 0;
    for(int i = 0; i<sizeOfArray; i++)
        for (int j = i+1; j<sizeOfArray; j++){
            int s = arr[i] + arr[j];
            if (isPerfectSquare(s))
                count++;
        }

    return count;
}

/*
Enter the size of the array : 4
Enter the elemnets of the array : 11 5 4 20
The numbers of square pairs can be made are: 3
*/

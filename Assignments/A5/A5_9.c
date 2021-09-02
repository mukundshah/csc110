/*
An array is called centered-15 if some consecutive sequence of elements of the array sum 
to 15 and this sequence is preceded and followed by the same number of elements. For 
example {3, 2, 10, 4, 1, 6, 9} is centered-15 because the sequence 10, 4, 1 sums to 15 and 
the sequence is preceded by two elements (3, 2) and followed by two elements (6,9).
Write a function called isCentered15 that returns 1 if its array argument is centered-15, 
otherwise it returns 0.
*/

#include <stdio.h>

int isCentered15(int arr[], int length);

int main()
{
    int N;
    printf("Enter the size of array : ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the elements : ");
    for (int i = 0; i<N; i++)
        scanf("%d", &arr[i]);

    int result = isCentered15(arr, N);
    printf("Return: %d", result);

    return 0;
}

int isCentered15(int arr[], int length){
    if (length == 0) return 0;
    if (length == 3 && arr[1] == 15 ) return 1;

    int x = 1;
    while (x != (length-2)){
        int sum = 0;
        for (int i = x; i < length - 1; i++){
            sum += arr[i];
        
            if (sum == 15){
                if(length-i-1 == x)
                    return 1;
            }
        }
        x++;
    }
    return 0;
}

/*
Enter the size of array : 5
Enter the elements : 2 2 4 1 5
Return: 0

Enter the size of array : 7
Enter the elements : 3 2 10 4 1 6 9
Return: 1

*/
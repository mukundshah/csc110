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
    if (length == 3 && arr[1] == 15 ) return 0;

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
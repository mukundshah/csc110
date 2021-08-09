#include <stdio.h>

int countRepresentations(int numRupees);
int count(int arr[], int index, int sum);

int main(){
    int amount;
    printf("Enter the amount: ");
    scanf("%d",&amount);

    int result = countRepresentations(amount);
    printf("Rs. %d can be represented in %d ways.", amount, result);

    return 0;
}

int countRepresentations(int numRupees){
    int denominations[5] = {1,2,5,10,20};
    int size = 5;
    int result;
    return result = count(denominations, size - 1, numRupees);
}

int count(int arr[], int index, int sum){
    if(sum == 0)
        return 1;
    if(sum < 0 || index < 0)
        return 0;
    
    int include = count(arr, index, sum-arr[index]);
    int exclude = count(arr, index - 1, sum);

    return include + exclude;
}

/*
Enter the amount: 12
Rs. 12 can be represented in 15 ways.
*/
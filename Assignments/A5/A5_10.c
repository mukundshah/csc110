#include <stdio.h>
#include <math.h>

int isPrime(int num);
int sum_of_perfectnum(int i, int j);

int main()
{
    return 0;
}

int isPrime(int num){
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(int i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int sum_of_perfectnum(int i, int j){
    int sum = 0;
    return sum;
}
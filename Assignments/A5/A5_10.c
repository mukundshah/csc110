#include <stdio.h>
#include <math.h>

__uint128_t isPrime(__uint128_t);
__uint128_t sum_of_perfectnum(int i, int j);
__uint128_t perfectnum(__uint128_t i);

__uint128_t main()
{
    int i, j;
    printf("Due to internal  limitation, first 8 perfect numbers are only available.\n");
    printf("Enter rank for first perfect number (i): ");
    scanf("%d", &i);
    printf("Enter rank for second perfect number (j): ");
    scanf("%d", &j);
    __uint128_t result = sum_of_perfectnum(i, j);
    printf("Sum of perfect numbers a and b = %llu", result);
    return 0;
}
__uint128_t isPrime(__uint128_t num){
    if (num <= 1) return 0;
    if (num % 2 == 0 && num > 2) return 0;
    for(__uint128_t i = 3; i < num / 2; i+= 2)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
__uint128_t perfectnum(__uint128_t n){
    __uint128_t count = 0, result = 0, num = 1;
    while (count != n){
        if(isPrime(num)){
            __uint128_t mersen = pow(2,num)-1;
            if(isPrime(mersen)){
                result = pow(2, (num-1)) * mersen;
                count++;
            }
        }
        num += 1;
    }
    return result;
}

__uint128_t sum_of_perfectnum(int i, int j){
    __uint128_t sum = 0;
    if(i!=j)
        sum = perfectnum(i) + perfectnum(j);
    if(i==j)
        sum = 2*perfectnum(i);
    return sum;
}


/*
Enter rank for first perfect number (a): 1
Enter rank for second perfect number (b): 4
Sum of perfect numbers a and b = 8134
*/
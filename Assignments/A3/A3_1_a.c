/*
Write a C to find product of two numbers using recursive function.
*/

#include <stdio.h>

int product(int, int);

int main()
{
    int num1,num2,result;  

    printf("Enter two number to find their product.\n");
    printf("Enter a value for multiplicand: ");
    scanf("%d",&num1);
    printf("Enter a value for multipier: ");
    scanf("%d",&num2);

    result = product(num1, num2);

    printf("Product of %d and %d is %d\n",num1,num2,result);

    return 0;
}

int product(int a, int b){
    if(a>0 && b<0)
        return product(b, a);
    else if (a < 0 && b < 0) {
        return product((-1 * a), (-1 * b));
    }

    if(a>b)
        return product(b, a);
    else if(b!=0)
        return (a + product(a, b - 1));
    else
        return 0;
}

/*
Enter two number to find their product.
Enter a value for multiplicand: -4
Enter a value for multipier: 5
Product of -4 and 5 is -20
*/
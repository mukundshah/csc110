#include <stdio.h>
void swap(int, int);
int main()
{
    int a, b;
    a = 55; b = 72;
    printf("Before swap:\ta = %d \t b = %d\n",a, b);
    swap(a, b);
    printf("After swap:\ta = %d \t b = %d\n",a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("From function:\ta = %d \t b = %d\n",a,b);
}

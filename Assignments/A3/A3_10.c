/*
Write a C program with function called maxAndMinSize () which takes two integers as 
arguments and find the minimum and maximum length of third side of triangle.
*/

#include<stdio.h>
#include<math.h>

void maxAndMinSize(int, int);

int main(){
    int a, b;
    printf("Enter the two sides of the triangle.\n");
    printf("Side 1 = ");
    scanf("%d", &a);
    printf("Side 2 = ");
    scanf("%d", &b);

    maxAndMinSize(a, b);
}

void maxAndMinSize(int a, int b){
    int max = a + b -1;
    int min = abs(b - a)+1;
    printf("For the third side, maximum size = %d and minimum size = %d.", max, min);
}

/*
Enter the two sides of the triangle.
Side 1 = 58
Side 2 = 4
For the third side, maximum size = 61 and minimum size = 55.
*/

/*
Write a C program that finds the roots of quadratic equation using function
*/

#include <stdio.h>
#include <math.h>

void findAndPrintRoots(int, int, int);

int main()
{
    int a, b, c;
    printf("Enter the coefficients of quadratic equation.\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    findAndPrintRoots(a, b, c);
}

void findAndPrintRoots(int a, int b, int c){
    int det = (b * b) - (4 * a * c);

    if (a==0)
        printf("The equation is not a quadratic equation.");
    else if(det>0){
       float r1 = (-1.0 * (float)b + sqrt(det)) / (2 * a);
       float r2 = (-1.0 * (float)b - sqrt(det)) / (2 * a);
        printf("The roots are: \t %f \tand\t %f", r1, r2);
    }
    else if(det<0){
        det = det * -1;
        float rel = (-1.0 * (float)b) / (2 * a);
        float img = sqrt(det) / (2 * a);
        printf("The roots are: \t %0.2f + %0.2fi \tand\t %0.2f - %0.2fi ", rel, img, rel, img);
    }
    else if(det == 0){
        printf("The equation has only one root.\n");
        printf("The root is: %0.2f",((-1.0 * (float)b) / (2 * a)));
    }
}

/*
Enter the coefficients of quadratic equation.
a = 5  
b = 5 
c = 16
The roots are:   -0.50 + 1.72i  and      -0.50 - 1.72i
*/

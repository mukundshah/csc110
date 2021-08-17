/*
Date: May 13, 2021
Lab 2: Write a C program that reads marks in five subjects of a student and then tests 
       whether student ids fail or pass.
*/

#include <stdio.h>
int main(){
    int c, math, dl, iit, phy;
    printf("Enter marks in C, Math, DL, IIT and Phy: ");
    scanf("%d%d%d%d%d", &c, &math, &dl, &iit, &phy);
    
    if(c>=40&&math>=40&&dl>=40&&iit>=40&&phy>=40)
        printf("Student is pass.");
    else
        printf("Student is fail.");
    return 0;
}

/*
----OUTPUT----
Enter marks in C, Math, DL, IIT and Phy: 58 56 95 78 20
Student is fail.

Enter marks in C, Math, DL, IIT and Phy: 76 87 95 40 85
Student is pass.
*/

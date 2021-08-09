#include <stdio.h>

struct distance {
    int meter;
    int centimeter;
};

int main(){
    struct distance d;
    printf("Enter distance.\n");
    printf("Meter part = ");
    scanf("%d", &d.meter);
    printf("Centimeter part = ");
    scanf("%d", &d.centimeter);

    int calc = ((d.meter*100)+d.centimeter)*5;
    int m = calc / 100;
    int c = calc % 100;

    printf("The 5 times of the entered distance is %dm %dcm.", m, c);
}

/*
Enter distance.
Meter part = 5
Centimeter part = 45
The 5 times of the entered distance is 27m 25cm.
*/
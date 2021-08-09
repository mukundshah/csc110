#include <stdio.h>

struct currency {
    int rupee;
    int paisa;
};

int main(){
    struct currency a,b;
    printf("Enter first amount.\n");
    printf("Rupee part = ");
    scanf("%d", &a.rupee);
    printf("Paisa part = ");
    scanf("%d", &a.paisa);

    printf("\nEnter second amount.\n");
    printf("Rupee part = ");
    scanf("%d", &b.rupee);
    printf("Paisa part = ");
    scanf("%d", &b.paisa);

    int calc = ((a.rupee + b.rupee) * 100) + (a.paisa + b.paisa);
    int r = calc / 100;
    int p = calc % 100;

    printf("\nThe sum of the entred amounts is %d rupee(s) %d paisa.", r, p);
}

/*
Enter first amount.
Rupee part = 5
Paisa part = 15

Enter second amount.
Rupee part = 4
Paisa part = 13

The sum of the entred amounts is 9 rupee(s) 28 paisa.
*/
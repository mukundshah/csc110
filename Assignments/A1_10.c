#include <stdio.h>

int main(void) {
    int space=1, n=5, row=1;
    
    for(int i=1; i<=n; i++){
        
        for(int j=space; j<=n; j++)
            printf("  ");
        for(int j=i; j<=row; j++)
            printf("%d ",j);
        for(int j=(row-1); j>=i; --j)
            printf("%d ",j);

        printf("\n");
        row +=2;
        space +=1;
    }
    
    return 0;
}
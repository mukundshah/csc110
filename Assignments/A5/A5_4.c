/*
4. Explain various modes in which file can be opened? Write a program to CREATE and 
WRITE N numbers in a file "NUMBER.TXT" . Open this file then read its content and put 
all even numbers in one file "EVEN.TXT" and odd numbers in another file"ODD.TXT".
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fnum = fopen("files\\NUMBER.txt", "w+");
    FILE *feven = fopen("files\\EVEN.txt", "w+");
    FILE *fodd = fopen("files\\ODD.txt", "w+");
    int N;

    if(fnum==NULL){
        printf("File not opened !!!");
        exit(0);
    }
    printf("File opened successfully.");

    printf("\nHow many numbers do you want to write in the file? : ");
    scanf("%d", &N);

    int num;
    printf("Enter the numbers: ");
    for (int i = 0; i < N; i++){
        scanf("%d", &num);
        fprintf(fnum, "%d\n", num);
    }
    printf("Numbers successfully written to NUMBER.txt.");
    rewind(fnum);
    while(fscanf(fnum, "%d", &num) != EOF){
    
        if((num%2)==0)
            fprintf(feven, "%d\n", num);
        else
            fprintf(fodd, "%d\n", num);
        
    }

    rewind(feven);
    rewind(fodd);

    printf("\n\nEven numbers: ");
    while(fscanf(feven, "%d", &num) != EOF)
        printf("%d, ", num);
    printf("\nEven numbers successfully written to EVEN.txt.");
    printf("\n");
    printf("\nOdd numbers: ");
    while(fscanf(fodd, "%d", &num) != EOF)
        printf("%d, ", num);
    printf("\nOdd numbers successfully written to ODD.txt.");
    fclose(fnum);
    fclose(fodd);
    fclose(feven);
    return 0;
}

/*
File opened successfully.
How many numbers do you want to write in the file? : 6
Enter the numbers: 1 2 3 4 5 6
Numbers successfully written to NUMBER.txt.

Even numbers: 2, 4, 6,
Even numbers successfully written to EVEN.txt.

Odd numbers: 1, 3, 5,
Odd numbers successfully written to ODD.txt.
*/
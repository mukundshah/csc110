/*
Why do we need data files? What are the different file opening modes? Write a program 
that reads data from a file "input.txt" and writes to "output.txt" file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    char ch, str[100], ch_temp, str_temp[100];
    int year, year_temp;

    fptr = fopen("files\\q2.txt", "w+");
    if (fptr == NULL){
        printf("Operation failed !!!");
        exit(1);
    }
    printf("File created and opened successfully.");
    
    ch = 'C';
    fputc(ch, fptr);
    rewind(fptr);
    ch_temp = fgetc(fptr);
    printf("\n%c", ch_temp);
    fclose(fptr);

    fptr = fopen("files\\q2.txt", "w+");
    strcpy(str, "Happy New Year");
    fputs(str, fptr);
    rewind(fptr);
    fgets(str_temp, 30, fptr);
    printf("\n%s", str_temp);
    fclose(fptr);

    fptr = fopen("files\\q2.txt", "w+");
    year = 2021;
    fprintf(fptr, "%d", year);
    rewind(fptr);
    fscanf(fptr, "%d", &year_temp);
    printf("\n%d", year_temp);
    fclose(fptr);

    return 0;
}

/*
File created and opened successfully.
C
Happy New Year
2021
*/

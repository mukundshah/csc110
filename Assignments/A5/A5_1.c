/*
Why do we need data files? What are the different file opening modes? Write a program 
that reads data from a file "input.txt" and writes to "output.txt" file.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptrSource, *fptrDest;
    char ch;

    fptrSource = fopen("files\\input.txt", "r");
    fptrDest = fopen("files\\output.txt", "w");

    if (fptrSource == NULL){
        printf("\ninput.txt can not be opened.");
        exit(1);
    }
    printf("\ninput.txt opened successfully.");

    if (fptrDest == NULL){
        printf("\noutput.txt can not be created.");
        exit(1);
    }
    printf("\noutput.txt created successfully.");

    while((ch = fgetc(fptrSource))!= EOF){
        fputc(ch, fptrDest);
    }
    printf("\nSuccessfully copied from 'input.txt' to 'ouput.txt'.");

    fclose(fptrSource);
    fclose(fptrDest);

    return 0;
}

/*
input.txt opened successfully.
output.txt created successfully.
Successfully copied from 'input.txt' to 'ouput.txt'.
*/

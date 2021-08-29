/*
Write a program that will concatenate two files, that is, append the contents of one file 
at the end of another file and write the result in a third file
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2, *fp3;
    char ch;

    fp1 = fopen("files\\file1.txt", "r");
    fp2 = fopen("files\\file2.txt", "r");

    fp3 = fopen("files\\file3.txt", "w");

    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        printf("Could not open files !!!");
        exit(0);
    }

    while((ch = fgetc(fp1))!=EOF)
        fputc(ch, fp3);
    
    while((ch = fgetc(fp2))!=EOF)
        fputc(ch, fp3);

    printf("Merged file1.txt and file2.txt into file3.txt.");

    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
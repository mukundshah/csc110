#include <stdio.h>

int main()
{
    FILE *fnum = fopen("files\\NUMBER.txt", "w+b");
    FILE *feven = fopen("files\\EVEN.txt", "w+b");
    FILE *fodd = fopen("files\\ODD.txt", "w+b");
    int N;

    if(fnum==NULL){
        printf("File not opened !!!");
        exit(0);
    }
    printf("File opened successfully.");

    printf("\nHow many numbers do you want to write in the file? : ");
    scanf("%d", &N);

    int nums;
    printf("Enter the numbers: ");
    for (int i = 0; i < N; i++){
        scanf("%d", &nums);
        fseek(fnum, 0, SEEK_END);
        fwrite(&nums, sizeof(int), 1, fnum);
    }
    rewind(fnum);
    for (int i = 0;  fread(&nums, sizeof(int), 1, fnum) == 1; i++){   
        if((nums%2)==0){
                fseek(feven, 0, SEEK_END);
                fwrite(&nums, sizeof(int), 1, feven);
            }
        else{
                fseek(fodd, 0, SEEK_END);
                fwrite(&nums, sizeof(int), 1, fodd);
        }
    }

    rewind(feven);
    rewind(fodd);

    while(fread(&nums, sizeof(int), 1, fodd)==1)
        printf("%d, ", nums);

    printf("\n");

    while(fread(&nums, sizeof(int), 1, feven) == 1)
        printf("%d, ", nums);

    fclose(fnum);
    fclose(fodd);
    fclose(feven);
    return 0;
}
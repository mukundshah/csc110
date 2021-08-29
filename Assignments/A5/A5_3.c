/*
Write an interactive C program that will maintain roll number, name, address and total 
marks of students with the following menu
a. Add new Record
b. Edit Record
c. Delete Record
d. Display all Records
e. Display information of given roll number
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll, total_marks;
    char name[50], address[80];
};

void printRef(struct Student std);
void showOptions();
void selectOption();
void executeOption(char);
void addRecord();
void editRecord();
void deleteRecord();
int confirmDeleteRecord();
void displayAllRecords();
void displayOneRecord();
void quitProgram();

struct Student student, st;
FILE *fptr;

int main(){
    
    printf("Loading database......");
    fptr = fopen("files\\student_records.dat", "r+b");
    if(fptr == NULL){
        fptr = fopen("files\\student_records.dat", "w+b");
        if(fptr==NULL){
            printf("File cannot be created !!!");
            exit(1);
        }
    }
    printf("\nProgram loaded successfully.\n");

    printf("\n***** Welcome to Student Records System *****");
    showOptions();
    selectOption();
    
    return 0;
}

void printRef(struct Student std){
    printf("\nRoll no. of student    : %d", std.roll);
    printf("\nName of student        : %s", std.name);
    printf("\nAddress of student     : %s", std.address);
    printf("\nTotal marks of student : %d", std.total_marks);
}

void showOptions(){
    printf("\n\nChoose your option: ");
    printf("\n\ta. Add new record.");
    printf("\n\tb. Edit record.");
    printf("\n\tc. Delete record.");
    printf("\n\td. Display all records.");
    printf("\n\te. Display information of given roll number.");
    printf("\n\tx. Quit program.");
}

void selectOption(){
    char opt;
    printf("\nSelect: ");
    scanf(" %c", &opt);
    executeOption(opt);
}

void executeOption(char opt){
    switch (opt){
        case 'a':
            addRecord();
            break;
        case 'b':
            editRecord();
            break;
        case 'c':
            deleteRecord();
            break;
        case 'd':
            displayAllRecords();
            break;
        case 'e':
            displayOneRecord();
            break;
        case 'x':
            quitProgram();
        default:
            printf("\nInvalid option !!!\nPlease try again...");
            break;
    }
    showOptions();
    selectOption();
}

void addRecord(){
    printf("\n*************** Add new record **************\n");
    fseek(fptr, 0, SEEK_END);
    printf("Roll no. of student (unique) : ");
    scanf("%d", &student.roll);
    printf("Name of student              : ");
    scanf("%s", &student.name);
    printf("Address of student           : ");
    scanf("%s", &student.address);
    printf("Total marks of student       : ");
    scanf("%d", &student.total_marks);

    fwrite(&student, sizeof(student), 1, fptr);
    printf("\nRecord has been added successfully.");
    rewind(fptr);
    fread(&st, sizeof(student), 1, fptr);
    printf("\n**** The information for your reference *****");
    printRef(student);
    printf("\n*********************************************");
}
void editRecord(){
   int roll, isFound=0, recordNo=0;
    printf("\n**************** Edit record ****************\n");
    printf("Enter the roll no. of student to edit : ");
    scanf("%d", &roll);
    rewind(fptr);
    while(fread(&student, sizeof(student),1,fptr)==1){
        if(student.roll == roll){
            printf("\n**** The information for your reference *****");
            printRef(student);
            printf("\n*********************************************");
            printf("\n*************** Enter new data **************");
            printf("Name of student              : ");
            scanf("%s", &student.name);
            printf("Address of student           : ");
            scanf("%s", &student.address);
            printf("Total marks of student       : ");
            scanf("%d", &student.total_marks);
            fseek(fptr, sizeof(student) * recordNo, SEEK_SET);
            if(fwrite(&student, sizeof(student),1,fptr)==1){
                printf("\nRecord of roll number %d updated successfully.", roll);
                isFound = 1;
                break;
            }
        }
        recordNo++;
    }
    if(!isFound)
        printf("\nStudent with roll number %d is not found....", roll);
}
void deleteRecord(){
    int roll, isFound=0, shouldDelete=0;
    printf("\n**************** Delete record ****************\n");
    printf("Enter the roll no. of student to edit : ");
    scanf("%d", &roll);
    FILE *fptrTmp = fopen("files\\temp.dat", "wb");
    rewind(fptr);
    while (fread(&student, sizeof(student), 1, fptr) == 1)
    {
        if (student.roll == roll){
            printf("\n**** The information for your reference *****");
            printRef(student);
            printf("\n*********************************************");
            shouldDelete = confirmDeleteRecord();
            isFound = 1;
            break;
        }
        if (!shouldDelete){
            fwrite(&student, sizeof(student), 1, fptrTmp);
        }
    }
    fclose(fptr);
    fclose(fptrTmp);
    remove("files\\student_records.dat");
    rename("files\\temp.dat", "files\\student_records.dat");
    fptr = fopen("files\\student_records.dat", "r+b");
    if(!isFound)
        printf("\nStudent with roll number %d is not found....", roll);
}

int confirmDeleteRecord(){
    char choice;
    printf("\nDo you want to delete? [Y/N] : ");
        scanf(" %c", &choice);
        switch (choice)
        {
            case 'Y':
                return 1;
            case 'N':
                return 0;
            default:
                printf("Invalid choice !!!");
                confirmDeleteRecord();
        }
}

void displayAllRecords(){
    printf("\n************ Student Record List ************\n");
    printf("Roll No.\tName\t\tAddress\t\tTotal marks");
    printf("\n---------------------------------------------\n");
    rewind(fptr);
    while(fread(&student, sizeof(student),1,fptr)==1){
        printf("%d\t%s\t\t%s\t\t%d", student.roll, student.name, student.address, student.total_marks);
        printf("\n---------------------------------------------\n");
    }
}

void displayOneRecord(){
    int roll, isFound=0;
    printf("\n*************** Student Record **************\n");
    printf("Enter the roll no. of student to display : ");
    scanf("%d", &roll);
    rewind(fptr);
    while(fread(&student, sizeof(student),1,fptr)==1){
        if(student.roll == roll){
            printf("\n*********************************************");
            printRef(student);
            printf("\n*********************************************");
            isFound = 1;
            break;
        }
    }
    if(!isFound)
        printf("\nStudent with roll number %d is not found....", roll);
}

void quitProgram(){
    printf("\n**************** Thank you !! ***************");
    fclose(fptr);
    printf("\nProgram terminated successfully...");
    exit(0);
}
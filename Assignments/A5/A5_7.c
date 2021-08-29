/*
Write a C program to read name, address, post, salary of n employees and store them in 
a file named “employee.txt”. Read the records from the file and display then in the order 
of increasing salary.
*/

#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50], address[50], post[50];
    int salary;
};

int main()
{
    struct Employee e;
    FILE *fptr = fopen("files\\employee.txt", "w+");
    int N;

    printf("Enter the number of employees (n) : ");
    scanf("%d", &N);
    printf("\nEnter employee details.");
    printf("\nName  Address  Post  Salary\n");
    for (int i = 0; i < N;i++){
        scanf("%s%s%s%d", e.name, e.address, e.post, &e.salary);
        fprintf(fptr, "%s\t%s\t%s\t%d\n", e.name, e.address, e.post, e.salary);
    }
    rewind(fptr);
    printf("\n*************** Employee List ***************\n");
    printf("\nName\tAddress\tPost\tSalary");
    printf("\n---------------------------------------------\n");

    struct Employee tempArr[N], temp;

    for(int i=0; fscanf(fptr, "%s%s%s%d", e.name, e.address, e.post, &e.salary)!=EOF; i++){
        strcpy(tempArr[i].name,e.name);
        strcpy(tempArr[i].address,e.address);
        strcpy(tempArr[i].post, e.post);
        tempArr[i].salary = e.salary;
    }

    for (int i = 0; i<N; i++)
        for (int j = 0; j<N; j++)
        {
            if(tempArr[i].salary<tempArr[j].salary){
                temp = tempArr[i];
                tempArr[i] = tempArr[j];
                tempArr[j] = temp;
            }
        }

    for (int i = 0; i < N; i++){
        printf("%s\t%s\t%s\t%d", tempArr[i].name, tempArr[i].address, tempArr[i].post, tempArr[i].salary);
        printf("\n---------------------------------------------\n");
    }

        return 0;
}
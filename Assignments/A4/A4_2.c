/*
*/

#include <stdio.h>
#include <stdlib.h>

struct student{
    int rollno;
    char name[20];
    int marks;
};

int main(){
    int n = 10, rollno;
    struct student *stdptr;

    printf("Enter the rollno, name, and marks of the 10 students:\n");

    stdptr = (struct student*)malloc(n*sizeof(struct student));

    for(int i=0; i<n; ++i){
        scanf("%d %s %d", &(stdptr + i)->rollno, (stdptr + i)->name, &(stdptr + i)->marks);
    }
    for(int i=0; i<n; ++i){
        printf("%d\t%s\t%d\n", (stdptr + i)->rollno, (stdptr + i)->name, (stdptr + i)->marks);
    }
    printf("\n");
    while (n>0){
        printf("Press Ctrl + C to quit.\nOr, enter the roll the number of the student you want to delete: ");
        scanf("%d", &rollno);
        for (int i=0; i<n; i++)
            if(((stdptr+i)->rollno)==rollno){
                for(int j = i; j<n; j++){
                    *(stdptr + j) = *(stdptr + j + 1);
                }
                break;
            }
        printf("Student of roll no %d deleted successfully.\n", rollno);
        n = n - 1;
        for (int i = 0; i < n; i++)
        {
            printf("%d\t%s\t%d\n", (stdptr + i)->rollno, (stdptr + i)->name, (stdptr + i)->marks);
        }
        // printf("Enter 0 to quit, or 1 to continue deleting: ");
        // scanf("%d", choice);
    }

    return 0;
}

/*
Enter the rollno, name, and marks of the 10 students:
1 Ram 500
2 Shyam 550
3 Hari 250
4 Gopal 400
5 Ghanshyam 350
6 Tara 360
7 Ganesh 780
8 Laxman 640
9 Mohan 550
10 Bharat 440

1       Ram     500
2       Shyam   550
3       Hari    250
4       Gopal   400
5       Ghanshyam       350
6       Tara    360
7       Ganesh  780
8       Laxman  640
9       Mohan   550
10      Bharat  440
Press Ctrl + C to quit.
Or, enter the roll the number of the student you want to delete: 5
Student of roll no 5 deleted successfully.
1       Ram     500
2       Shyam   550
3       Hari    250
4       Gopal   400
6       Tara    360
7       Ganesh  780
8       Laxman  640
9       Mohan   550
10      Bharat  440
Press Ctrl + C to quit.
Or, enter the roll the number of the student you want to delete: 10
Student of roll no 10 deleted successfully.
1       Ram     500
2       Shyam   550
3       Hari    250
4       Gopal   400
6       Tara    360
7       Ganesh  780
8       Laxman  640
9       Mohan   550
Press Ctrl + C to quit.
Or, enter the roll the number of the student you want to delete: Ctrl+^C
*/
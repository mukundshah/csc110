#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//[^\n] read with spaces

struct detailOfPerson {
    char *name;
    char *phone;
    char *email;
    char *mailing_address;
};

int main(){
    struct detailOfPerson *details = (struct detailOfPerson *)malloc(20 * sizeof(struct detailOfPerson));
    
    printf("Enter the details of the 20 persons.\n");
    printf("Name\tPhone\tEmail\tMailing Address\n");
    for(int i =0; i<20; i++){
        (details+i)->email = (char *)malloc(128);
        (details+i)->name = (char *)malloc(128);
        (details+i)->phone = (char *)malloc(10);
        (details+i)->mailing_address = (char *)malloc(128);
        scanf("%s %s %s %s", (details + i)->name, (details + i)->phone, (details + i)->email, (details + i)->mailing_address);
    }
    
    

    //Sorting
    for (int i = 0; i < 20; i++)
        for (int j=i+1; j<20; j++)
            if(strcmp((details + i)->name,(details + j)->name)>0)
            {
                struct detailOfPerson temp = *(details+i);
                *(details+i) = *(details+j);
                *(details + j) = temp;
            }
        
    //after sort
    printf("\nAfter sorting the names of persons alphabetically\n");
    printf("Name\tPhone\t\tEmail\t\tMailing Address\n");
        for (int i = 0; i < 20; i++)
        {
            printf("%s\t%s \t%s \t%s\n", (details + i)->name, (details + i)->phone, (details + i)->email, (details + i)->mailing_address);
        }

        return 0;
}

/*
Enter the details of the 20 persons.
Name    Phone   Email   Mailing Address
ram 1234512345 email@email.com Kathmandu
laxman 1234512345 email@email.com Kathmandu
hari 1234512345 email@email.com Kathmandu
gopal 1234512345 email@email.com Kathmandu
bharat 1234512345 email@email.com Kathmandu
tom 1234512345 email@email.com Kathmandu
rohan 1234512345 email@email.com Kathmandu
arphan 1234512345 email@email.com Kathmandu
laxmi 1234512345 email@email.com Kathmandu
ganesh 1234512345 email@email.com Kathmandu
ram 1234512345 email@email.com Kathmandu
laxman 1234512345 email@email.com Kathmandu
hari 1234512345 email@email.com Kathmandu
gopal 1234512345 email@email.com Kathmandu
bharat 1234512345 email@email.com Kathmandu
tom 1234512345 email@email.com Kathmandu
rohan 1234512345 email@email.com Kathmandu
arphan 1234512345 email@email.com Kathmandu
laxmi 1234512345 email@email.com Kathmandu
ganesh 1234512345 email@email.com Kathmandu

After sorting the names of persons alphabetically
Name    Phone           Email           Mailing Address
arphan  1234512345      email@email.com         Kathmandu
arphan  1234512345      email@email.com         Kathmandu
bharat  1234512345      email@email.com         Kathmandu
bharat  1234512345      email@email.com         Kathmandu
ganesh  1234512345      email@email.com         Kathmandu
ganesh  1234512345      email@email.com         Kathmandu
gopal   1234512345      email@email.com         Kathmandu
gopal   1234512345      email@email.com         Kathmandu
hari    1234512345      email@email.com         Kathmandu
hari    1234512345      email@email.com         Kathmandu
laxman  1234512345      email@email.com         Kathmandu
laxman  1234512345      email@email.com         Kathmandu
laxmi   1234512345      email@email.com         Kathmandu
laxmi   1234512345      email@email.com         Kathmandu
ram     1234512345      email@email.com         Kathmandu
ram     1234512345      email@email.com         Kathmandu
rohan   1234512345      email@email.com         Kathmandu
rohan   1234512345      email@email.com         Kathmandu
tom     1234512345      email@email.com         Kathmandu
tom     1234512345      email@email.com         Kathmandu
*/
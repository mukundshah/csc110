/*
Write a C program to read a character array in inputs as “TRIBHUVAN UNIVERSITY” from the user 
and find out how many times a character “I” occur in that array?
*/

#include <stdio.h>
int main()
{
    char str[30];
    int count=0;
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);  // read string

    for(int i = 0; i < 30; i++){
        if(str[i] == 73 || str[i] == 105)
            count++;
    }

    printf("Frequency of 'I'/'i' is: %d", count);

    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter string: TRIBHUVAN UNIVERSITY
Frequency of 'I'/'i' is: 3

*/
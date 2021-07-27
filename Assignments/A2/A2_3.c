/*
Write a C program to test whether the given string is palindrome or not without using string 
handling function
*/

#include <stdio.h>
int main()
{
    char str[50], rev_str[50]={'\0'};
    int length=0, flg=1;
    printf("Enter a single word string: ");
    scanf("%s",str);

    for(int i = 0; str[i] != '\0' ; i++){
        length++;
    }

    for(int i = length-1; i>=0;i--){
        rev_str[length - i - 1] = str[i];
    }
    
    for (int i = 0; i < length ; i++)
    {
        if (rev_str[i] != str[i]){
            flg=0;
            break;
        }
    }

    if(flg == 1)
        printf("Entered string is a palindrome.", str);
    else 
        printf("Entered string is not palindrome.", str);

    return 0;
}

/*
----------------------------------OUTPUT-----------------------------------

Enter a single word string: kayak
Entered string is a palindrome.

Enter a single word string: differ
Entered string is not palindrome.

*/

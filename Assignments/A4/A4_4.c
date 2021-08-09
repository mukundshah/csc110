#include <stdio.h>
#include <string.h>

void delOccurrences(char *str, char ch){
    int len = strlen(str);
  	for(int i = 0; i < len; i++)
	{
		if(str[i] == ch)
		{
			for(int j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
			i--;	
		} 
	}	
}

int main()
{

    char *str;
    char ch;

    printf("Enter  the string : ");
    scanf("%s",str);

    printf("Enter character to remove from the string: ");
    scanf(" %c", &ch);

    delOccurrences(str, ch);

    printf("Output: %s", str);

    return 0;
}

/*
Enter  the string : AmritSCampus
Enter character to remove from the string: S
Output: AmritCampus
*/
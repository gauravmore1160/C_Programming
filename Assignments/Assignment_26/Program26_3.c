///////////////////////////////////////////////////////////////////
//
//  Function Name : ToggleCase
//  Description   : Accepts an alphabet and prints all characters from that character up to 'z' or 'Z'
//  Input         : Character (char)
//  Output        : Character sequence printed on console
//  Author        : Gaurav More
//  Date          : 27/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void ToggleCase(char ch)
{   
    int iCnt=0;

    if(ch==' ')
    {
        printf("Invalid Input");
        return;
    }

    if(ch>='a' && ch<='z' )
    {
        for(iCnt=ch;iCnt<=122;iCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
    }
     else if( ch>='A' && ch<='Z')
     {
       for(iCnt=ch;iCnt<=90;iCnt++)
        {
            printf("%c\t",ch);
            ch++;
        }
     }
     
     
}

int main()
{
    char cValue='\0';
    

    printf("Enter the Character:");
    scanf("%c",&cValue);

    ToggleCase(cValue);

  

    return EXIT_SUCCESS;
}
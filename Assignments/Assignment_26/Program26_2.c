///////////////////////////////////////////////////////////////////
//
//  Function Name : ToggleCase
//  Description   : Accepts a character and toggles its case if alphabetical, otherwise returns the character unchanged
//  Input         : Character (char)
//  Output        : Character (Toggled character, original character, or -1 for space)
//  Author        : Gaurav More
//  Date          : 27/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

char ToggleCase(char ch)
{   
    int iCnt=0;

    if(ch==' ')
    {
        return -1;
    }

    if(ch>='a' && ch<='z' )
    {
        ch=ch-32;  
        return ch;
    }
     

     else if( ch>='A' && ch<='Z')
     {
        ch=ch+32;
        return ch;
     }
     else
     {
        return ch;
     }
     

   
}

int main()
{
    char cValue='\0';
    char cRet=0;

    printf("Enter the Character:");
    scanf("%c",&cValue);


   cRet=ToggleCase(cValue);

   if(cRet==-1)
   {
    printf("Invalid Input");
   }
   else
   {
        printf("After ToggleCase%c",cRet);
   }


    return EXIT_SUCCESS;
}
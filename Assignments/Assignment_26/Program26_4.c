///////////////////////////////////////////////////////////////////
//
//  Function Name : ToggleCase
//  Description   : Accepts a character and checks whether it is a special symbol (non-alphanumeric)
//  Input         : Character (char)
//  Output        : bool (true if special character, false if alphanumeric)
//  Author        : Gaurav More
//  Date          : 27/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{   
    int iCnt=0;

    if(ch==' ')
    {
        printf("Invalid Input");
        return -1;
    }

    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'|| ch>='0' && ch<='9')
    {
        return false;
    }
     else 
     {
        return true;
     }
     
     
}

int main()
{
    char cValue='\0';
    char cRet='\0';
    

    printf("Enter the Character:");
    scanf("%c",&cValue);

    cRet=ChkSpecial(cValue);

    if(cRet==false)
   {
    printf("It is not a special character");
   }
   else
   {
        printf("Special Character");
   }

  

    return EXIT_SUCCESS;
}
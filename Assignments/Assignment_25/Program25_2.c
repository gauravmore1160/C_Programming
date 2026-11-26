///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : Accepts a character and checks whether it is an uppercase letter (A-Z)
//  Input         : Character (char)
//  Output        : bool (1 / true if uppercase, 0 / false otherwise, -1 for space)
//  Author        : Gaurav More
//  Date          : 26/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool ChkCapital(char ch)
{
     
    if (ch==' ')
    {
       return -1;
    }
        if(ch>=65 && ch<=90 )
        {
           return true;  
        }
        else 
        {
            return false;
        }       
}

int main()
{
    
    char cValue;
    bool bRet=0;

    printf("Enter the character:");
    scanf(" %c",&cValue);

    bRet=ChkCapital(cValue);

    if(bRet==true)
    {
        printf("Character is Capital");
    }
    else
    {
        printf("Character is Not Capital");
    }

    return EXIT_SUCCESS;
}
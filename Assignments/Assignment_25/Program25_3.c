///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCapital
//  Description   : Accepts a character and checks whether it is a numeric digit (0-9)
//  Input         : Character (char)
//  Output        : bool (1 / true if digit, 0 / false otherwise, -1 for space)
//  Author        : Gaurav More
//  Date          : 26/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool ChkDigit(char ch)
{
     
    if (ch==' ')
    {
       return -1;
    }
        if(ch>='0' && ch<='9'  )
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

    bRet=ChkDigit(cValue);

    if(bRet==true)
    {
        printf("Character is Number");
    }
    else
    {
        printf("Character is not Number");
    }

    return EXIT_SUCCESS;
}
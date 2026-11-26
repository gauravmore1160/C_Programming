///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description   : Accepts a character and checks whether it is a lowercase letter (a-z)
//  Input         : Character (char)
//  Output        : bool (1 / true if lowercase, 0 / false otherwise, -1 for space)
//  Author        : Gaurav More
//  Date          : 26/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool ChkSmall(char ch)
{
     
    if (ch==' ')
    {
       return -1;
    }
        if( ch>=97 && ch<=122)
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

    bRet=ChkSmall(cValue);

    if(bRet==true)
    {
        printf("Character is Small Letter");
    }
    else
    {
        printf("Character is Not Small Letter");
    }

    return EXIT_SUCCESS;
}
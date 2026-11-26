///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkAlpha
//  Description   : Accepts a character and checks whether it is an alphabet (A-Z or a-z)
//  Input         : Character (char)
//  Output        : bool (1 / true if alphabet, 0 / false otherwise, -1 for space)
//  Author        : Gaurav More
//  Date          : 26/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool ChkAlpha(char ch)
{
     
    if (ch==' ')
    {
       return -1;
    }
        if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
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

    bRet=ChkAlpha(cValue);

    if(bRet==true)
    {
        printf("Character is Alphabet");
    }
    else
    {
        printf("Character is Not Alphabet");
    }

    return EXIT_SUCCESS;
}
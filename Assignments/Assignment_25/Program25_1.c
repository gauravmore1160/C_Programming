///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Accepts a string and a character and checks whether the character is present in the string
//  Input         : String (char *), Character (char)
//  Output        : bool (1 / true if present, 0 / false otherwise, -1 for NULL pointer)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
typedef int bool;

#define true 1
#define false 0

bool ChkChar(char *str,char ch)
{
    int iCount=0;
    if (str==NULL)
    {
       return -1;
    }
    while(*str != '\0')
    {
        if(*str==ch)
        {
           return true;  
        }
        
        *str++;
    }
    return false;
        
}

int main()
{
    char Arr[20];
    char cValue;
    bool bRet=0;

    printf("Enter the String:");
    scanf(" %[^\n]s",Arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    bRet=ChkChar(Arr,cValue);

    if(bRet==true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkChar
//  Description   : Accepts a string and a character and returns the frequency count of that character
//  Input         : String (char *), Character (char)
//  Output        : Integer (Frequency count or -1 for NULL pointer)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int ChkChar(char *str,char ch)
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
           iCount++; 
        }
        
        *str++;
    }
    return iCount;
        
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet=0;

    printf("Enter the String:");
    scanf(" %[^\n]s",Arr);

    printf("Enter the character:");
    scanf(" %c",&cValue);

    iRet=ChkChar(Arr,cValue);

    printf("The number of Frequency:%d",iRet);
    
    return EXIT_SUCCESS;
}
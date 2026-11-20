///////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOccurence
//  Description   : Accepts a string and a character and returns the index of its first occurrence
//  Input         : String (char *), Character (char)
//  Output        : Integer (First occurrence index or -1 for NULL pointer)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(char *str,char ch)
{
    int i=0;
    if (str==NULL)
    {
       return -1;
    }
   
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]==ch)
    {
        return i;
    }
   }      
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

    iRet=FirstOccurence(Arr,cValue);

    printf("The Index it Aprear :%d",iRet);
    
    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////
//
//  Function Name : lastOccurence
//  Description   : Accepts a string and a character and returns the index of its last occurrence
//  Input         : String (char *), Character (char)
//  Output        : Integer (Last occurrence index or -1 if not found / NULL pointer)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int lastOccurence(char *str,char ch)
{
    int i=0;
    int iCount=-1;
    if (str==NULL)
    {
       return -1;
    }
   
   for(i=0;str[i]!='\0';i++)
   {
    if(str[i]==ch)
    {
        
        iCount=i;
    }
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

    iRet=lastOccurence(Arr,cValue);

    printf("The Index it Aprear :%d",iRet);
    
    return EXIT_SUCCESS;
}





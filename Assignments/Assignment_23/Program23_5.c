///////////////////////////////////////////////////////////////////
//
//  Function Name : CountWhiteSpaces
//  Description   : Accepts a string and returns the total count of white spaces in it
//  Input         : String (char *)
//  Output        : Integer (Count of spaces or -1 for NULL pointer)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountWhiteSpaces(char *str)
{
    int iCount=0;
    if (str==NULL)
    {
       return -1;
    }
    while(*str != '\0')
    {
        if(*str==' ')
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
    int iRet=0;

    printf("Enter the String:\n");
    scanf("%[^\n]s",&Arr);

    iRet=CountWhiteSpaces(Arr);

    printf("The White spaces in String is:%d",iRet);


    return EXIT_SUCCESS;
}
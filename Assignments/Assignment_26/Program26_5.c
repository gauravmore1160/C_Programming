///////////////////////////////////////////////////////////////////
//
//  Function Name : ChkASCII
//  Description   : Accepts a character and returns its integer ASCII value
//  Input         : Character (char)
//  Output        : Integer (ASCII decimal value or -1 for space)
//  Author        : Gaurav More
//  Date          : 27/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int ChkASCII(char ch)
{   
    int iCnt=0;

    if(ch==' ')
    {
        return -1;
    }

    if(ch>='a' && ch<='z' )
    {
        return ch;
    }
     

     else if( ch>='A' && ch<='Z')
     {
        return ch;
     }
     else
     {
        return ch;
     }
     

   
}

int main()
{
    char cValue='\0';
    int iRet=0;

    printf("Enter the Character:");
    scanf("%c",&cValue);


   iRet=ChkASCII(cValue);

   if(iRet==-1)
   {
    printf("Invalid Input");
   }
   else
   {
        printf("ASCII Value is:%d",iRet);
   }


    return EXIT_SUCCESS;
}
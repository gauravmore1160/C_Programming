///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number from user and prints number line from -N to +N.
//  Input         : Integer
//  Output        : Number Line
//  Author        : Gaurav More
//  Date          : 30/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {   
        printf("%d\t",iCnt);   
    }

}

int main()
{
    int iValue=0;
    printf("Enter the number :");
    scanf("%d\n",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;

}
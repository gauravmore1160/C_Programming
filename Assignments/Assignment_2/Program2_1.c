///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints star pattern using loop
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    iCnt=1;
    while(iCnt<=5)
    {
        printf("* ");
        iCnt++;
    }
}


int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
        
    
    
    Display(iValue);
    return EXIT_SUCCESS;
}
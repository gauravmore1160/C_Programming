
///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts a number and prints HELLO if <= 10 else DEMO
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
    
    if(iNo<=10)
    {
        printf("HELLO");
    }
    else
    {
        printf("DEMO");
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
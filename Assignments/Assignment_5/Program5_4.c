///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDivisibility
//  Description   : Accepts a number and checks divisibility by 3 and 5
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDivisibility(int iNo1)
{
    if(iNo1<0)
    {
        iNo1=-iNo1;
    }
    else if(iNo1%3==0 && iNo1%5==0)
    {
        printf("the number is divisible by both 3 and 5");
    }
    else if(iNo1%3==0 && iNo1%5!=0)
    {
       printf("the number is divisible by both 3 "); 
    }
    else if(iNo1%3!=0 && iNo1%5==0)
    {
       printf("the number is divisible by both 5 "); 
    }
    else
    {
        printf("The number is not divisible by both 3 and 5");
    }
    
}
int main()
{
    int iValue=0;
 printf("Enter the number :\n");
 scanf("%d",&iValue);

 DisplayDivisibility(iValue);
    return EXIT_SUCCESS;
}

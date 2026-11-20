///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number and prints that many positive even numbers starting from 2[cite: 76]
//  Input         : Integer (iNo)[cite: 76]
//  Output        : Pattern printed on console[cite: 76]
//  Author        : Gaurav More
//  Date          : 19/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    int iMul=0;
    
    for(i=1;i<=iNo;i++)
    {
        iMul=iMul+2;
        printf("%d\t",iMul);
    }
    

}

int main()
{
    int iValue=0;
   

    printf("Enter the number of Rows:\n");
    scanf("%d",&iValue);

   

    Pattern(iValue);
    

    return EXIT_SUCCESS;
}
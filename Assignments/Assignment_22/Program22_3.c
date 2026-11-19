///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number and prints ascending numbers followed by * pattern[cite: 74]
//  Input         : Integer (iNo)[cite: 74]
//  Output        : Pattern printed on console[cite: 74]
//  Author        : Gaurav More
//  Date          : 19/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    
    for(i=1;i<=iNo;i++)
    {
        printf("%d\t",i);
        printf("*\t");
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
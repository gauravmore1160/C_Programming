///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number and prints #, number, and * pattern sequentially[cite: 75]
//  Input         : Integer (iNo)[cite: 75]
//  Output        : Pattern printed on console[cite: 75]
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
        printf("#\t");
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
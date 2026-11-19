///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number and prints descending numbers followed by # pattern[cite: 73]
//  Input         : Integer (iNo)[cite: 73]
//  Output        : Pattern printed on console[cite: 73]
//  Author        : Gaurav More
//  Date          : 19/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    
    for(i=iNo;i>=1;i--)
    {
        printf("%d\t",i);
        printf("#\t");
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
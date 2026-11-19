///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts a number and prints that many uppercase alphabets starting from A[cite: 72]
//  Input         : Integer (iNo)[cite: 72]
//  Output        : Pattern printed on console[cite: 72]
//  Author        : Gaurav More
//  Date          : 19/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    char Cap='\0';
    for(i=1,Cap='A';i<=iNo;i++,Cap++)
    {
        printf("%c\t",Cap);
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
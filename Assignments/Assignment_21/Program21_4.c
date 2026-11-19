///////////////////////////////////////////////////////////////////
//
//  Function Name : printPattern
//  Description   : Accepts number of rows and columns; prints * in odd columns and # in even columns[cite: 73]
//  Input         : Integer (iRow), Integer (iCol)[cite: 73]
//  Output        : Pattern printed on console[cite: 73]
//  Author        : Gaurav More
//  Date          : 19/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void printPattern(int iRow,int iCol)
{
    int i=0;
    int j=0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
            {
                if(j%2==0)
                {
                printf("#\t");
                }
                else
                {
                    printf("*\t");
                }    
            }
            printf("\n");
    }
    

}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter the number of Rows:\n");
    scanf("%d",&iValue1);

    printf("Enter the number of Colums:\n");
    scanf("%d",&iValue2);

    printPattern(iValue1,iValue2);
    

    return EXIT_SUCCESS;
}
///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts number of rows and columns and prints uppercase alphabets in odd rows and lowercase alphabets in even rows
//  Input         : Integer (iRow), Integer (iCol)
//  Output        : Pattern printed on console
//  Author        : Gaurav More
//  Date          : 07/11/2026
//
///////////////////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    char ch1='\0';
    char ch2='\0';
    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch1='A',ch2='a';j<=iCol;j++)
        {
            if(i%2!=0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
            else
            {
                printf("%c\t",ch2);
                ch2++;
            }
        }
        printf("\n");
    }
}

int main()
{
     int iValue1=0;
    int iValue2=0;

    printf("Enter the number of rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;
}
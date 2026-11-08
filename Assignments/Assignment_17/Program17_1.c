///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts number of rows and columns and prints numbers from 1 to 9 continuously in grid layout
//  Input         : Integer (iRow), Integer (iCol)
//  Output        : Pattern printed on console
//  Author        : Gaurav More
//  Date          : 08/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iCount=1;

    if(iRow<0)
    {
        iRow=-iRow;
    }
    else if(iCol<0)
    {
        iCol=-iCol;
    }

        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
               printf("%d\t",iCount); 
                
                
               if(iCount==9)
            {
                iCount=0;
            }
            iCount++;
            
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
///////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accepts number of rows and columns; prints positive numbers in odd rows and negative numbers in even rows
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
    int iCount1=0;
    int iCount2=0;

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
            iCount1=1;  
            iCount2=-1; 

                    for(j=1;j<=iCol;j++)
                    {
                        if(i%2!=0)
                        {
                            printf(" %d\t",iCount1);
                            iCount1++;
                            
                        }
                        else if(i%2==0)
                        {
                            printf("%d\t",iCount2);
                            iCount2--;
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
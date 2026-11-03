///////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Accepts range from user and returns addition of all numbers in between
//  Input         : Integer, Integer
//  Output        : Integer (Summation or -1 for invalid input)
//  Author        : Gaurav More
//  Date          : 03/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
    if(iStart<0||iEnd<0 || iEnd<iStart)
    {
        return -1;
    }  

    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        iSum=iSum+iCnt;
    }
    return iSum;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter the starting Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Ending Number:\n");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    if(iRet==1)
    {
    printf("The Summation of Range is:%d",iRet);
    }
    else
    {
        printf("Invalid input");
    }

    return EXIT_SUCCESS;
}
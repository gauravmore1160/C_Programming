#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : Percent
//  Description   : Accepts total marks and obtained marks to calculate percentage
//  Input         : Integer (Total Marks), Integer (Obtained Marks)
//  Output        : Float (Percentage value or -1.0 for invalid input)
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
float Percent(int iNo1,int iNo2)
{
    
    float iPer=0;
    if(iNo1<0 ||  iNo2<0)
    {
        return -1;
    }
    
    iPer=100*((float)iNo2/(float)iNo1);
     

    return iPer;
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    float iRet=0.0f;
    printf("Enter the Out of Marks:\n");
    scanf("%d",&iValue1);

    printf("Enter Marks you Obtained:\n");
    scanf("%d",&iValue2);

    iRet=Percent(iValue1,iValue2);

    printf("Percentage you Obtained:%.2f ",iRet);
    return EXIT_SUCCESS;

}
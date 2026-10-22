///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLargest
//  Description   : Accepts three numbers and prints the largest number
//  Input         : Integer, Integer, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLargest( int iNo1,int iNo2,int iNo3)
{
    if(iNo1 >iNo2 && iNo1 >iNo3)
    {
        printf("The %d is greater number",iNo1);
    }
    else if(iNo2>iNo1&&iNo2>iNo3)
    {
        printf("The %d is greater number",iNo2);
    }
    else {printf("The %d is Greater",iNo3);}

}




int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    printf("enter the three number: \n");
    scanf("%d %d  %d",&iValue1,&iValue2,&iValue3);
    CheckLargest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}
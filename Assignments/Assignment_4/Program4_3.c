///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckLargest
//  Description   : Accepts two numbers and displays the larger number
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckLargest( int iNo1,int iNo2)
{
    if(iNo1 >iNo2)
    {
        printf("The %d is greater number",iNo1);
    }
    else{printf("The %d is Greater",iNo2);}

}




int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter the two number: \n");
    scanf("%d %d",&iValue1,&iValue2);
    CheckLargest(iValue1,iValue2);
    return EXIT_SUCCESS;
}
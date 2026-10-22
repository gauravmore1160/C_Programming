///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEligibilty
//  Description   : Checks student admission eligibility based on marks and age
//  Input         : Float, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckEligibilty( float iMarks,int iAge)
{
    if(iMarks<0 || iMarks>100 || iAge<0 || iAge>100)
    {
        printf("INVALID MARKS OR AGE");
    }
else if(iMarks>=60 && iAge<=60 && iAge>=17)
{
    printf("Eligible for Addmission");
}
else
{
    printf("Not Eligible for Addmission");
}
}

int main()
{
    float iValue1=0.0f;
    int iValue2=0;
    printf("enter the Marks : ");
    scanf("%f",&iValue1);
    printf("enter the Age : ");
    scanf("%d",&iValue2);
    CheckEligibilty(iValue1,iValue2);
    return EXIT_SUCCESS;
}
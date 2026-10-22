///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckBonus
//  Description   : Calculates employee bonus based on salary and years of service
//  Input         : Float, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckBonus( float iSalary,int iYear)
{
    float iBonus=0.0f;
    if(iSalary<0 || iYear<0)
    {
            printf("entered salary or yaer of service is invalid");
    }
    else if (iYear>10)
    {
        iBonus=(iSalary*15)/100;
        printf("Bonus:%f ",iBonus);
    }
    else if(iYear<=10 && iYear>=5)
    {
        iBonus=(iSalary*10)/100;
        printf("Bonus:%f ",iBonus);
    }
    else if(iYear<5 && iYear>=0)
    {
        iBonus=(iSalary*5)/100;
        printf("Bonus:%f ",iBonus);
    }
}

int main()
{
    float iValue1=0.0f;
    int iValue2=0;
    printf("Enter the Salary : ");
    scanf("%f",&iValue1);
    printf("Enter the Year of service : ");
    scanf("%d",&iValue2);
    CheckBonus(iValue1,iValue2);
    return EXIT_SUCCESS;
}
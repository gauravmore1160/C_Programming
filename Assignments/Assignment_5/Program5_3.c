///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckGrade
//  Description   : Accepts marks and displays the corresponding grade
//  Input         : Float
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckGrade( float Marks)
{
    if(Marks < 0 || Marks > 100)
    {
        printf("Invalid Marks");
    }
    else if(Marks<=100 && Marks>=90)
    {      
        printf("A Grade");
    }
    else if (Marks<90 && Marks>=75)
    {
        printf("B Grade");
    }
    else if(Marks<75 && Marks>=60)
    {
            printf("C Grade");
    }
    else if(Marks<60 && Marks>=40)
    {
            printf("D Grade");
    }
    else
    {
    printf("FAIL");
    }
}

int main()
{
    float iValue=0;
    printf("enter the number");
    scanf("%f",&iValue);
    CheckGrade(iValue);
    return EXIT_SUCCESS;
}
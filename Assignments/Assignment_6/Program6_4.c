///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckTraingle
//  Description   : Checks whether given three sides form a valid triangle
//  Input         : Integer, Integer, Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTraingle( int iNo1,int iNo2,int iNo3)
{
    if(iNo1<0 || iNo2<0 || iNo3<0)
    {
        printf("INVALID INPUT");
    }
    else if(iNo1+iNo2>iNo3 && iNo2+iNo3>iNo1 && iNo1+iNo3>iNo2 )
    {
        printf("It's a valid traingle");
    }
    
    else
    {
        printf("Not a valid Traingle");
    }

}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    printf("enter the three side of traingle: \n");
    scanf("%d %d  %d",&iValue1,&iValue2,&iValue3);
    CheckTraingle(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}
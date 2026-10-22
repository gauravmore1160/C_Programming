///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayBill
//  Description   : Calculates electricity bill based on slab rates
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayBill(int iNo1)
{
    int dvalue1=0;
    if(iNo1<0)
    {
        printf("Invalid Bill Amount");
    }
    else if(iNo1<=100)
    {
        dvalue1=iNo1*5;
        printf("BILL : %d\n",dvalue1);
    }
    else if(iNo1<=200)
    {
        dvalue1=(100*5) + ((iNo1-100)*7);
       printf("BILL : %d\n",dvalue1);
    }
    else if(iNo1>200)
    {
         dvalue1=(100*5) + (100*7) +(iNo1-200) * 10;
       printf("BILL : %d\n",dvalue1);
    }
   
    
}
int main()
{
    int iValue=0;
 printf("Enter the number :\n");
 scanf("%d",&iValue);

 DisplayBill(iValue);
    return EXIT_SUCCESS;
}

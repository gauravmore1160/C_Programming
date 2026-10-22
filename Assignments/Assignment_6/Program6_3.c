///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckDiscount
//  Description   : Calculates final bill amount after applying discount
//  Input         : Float
//  Output        : None
//  Author        : Gaurav More
//  Date          : 21/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckDiscount(float fNo)
{
    float fDiscount=0;
    float fBill=0;
    if(fNo<0)
    {
        printf("INVALID INPUT");
    }
    else if(fNo<1000)
    {
        printf("%f",fNo);
    }
    else if(fNo>=1000 && fNo<=2000)
    {
        fDiscount=(fNo*10)/100;
        fBill=fNo-fDiscount;
        printf("BILL:%f",fBill);
    }
    else if(fNo>2000)
    {
        fDiscount=(fNo*20)/100;
        fBill=fNo-fDiscount;
        printf("BILL:%f",fBill);

    }
}




int main()
{
float  fValue=0;
printf("Enter the Bill Amount: \n");
scanf("%f",&fValue);
CheckDiscount(fValue);


    return EXIT_SUCCESS;
}
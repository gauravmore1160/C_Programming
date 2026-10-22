/*
--------------------------------
input-7
output-
2,4,6,8,10,12,14

--------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
int Printeven(int iNo1)
{
    if(iNo1<0)
    {
        printf("The number is invalid");
    }
   
    for(int iCnt=1,iMul=0;iCnt<=iNo1;iCnt++)
    {
        iMul=iCnt*2;
        printf("%d\n",iMul);
    }
}

int main()
{
    int iValue1=0;
    int Ret=0;
    
    printf("Enter the number");
    scanf("%d",&iValue1);
    Ret=Printeven(iValue1);

 return EXIT_SUCCESS;
}
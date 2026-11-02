
#include<stdio.h>
#include<stdlib.h>

int DiffFactorial(int iNo)
{
    int iCnt=0;
    int iEFact=1;
    int iOFact=1;
    int Dif=0;


    if(iNo<0)
    {
        iNo=-iNo;
    }
     
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {   
        if(iCnt%2!=0)
        {
        iOFact=iOFact*iCnt;
        }   
        else if(iCnt%2==0)
        {
        iEFact=iEFact*iCnt;
        }   
    }
        Dif=iEFact-iOFact;

    return Dif;

}

int main()
{

   int iValue=0;
   int iRet=0;

   printf("Enter the Number");
   scanf("%d",&iValue);
   iRet=DiffFactorial(iValue);

   printf("The diffrence  of odd and even  factors is:%d",iValue,iRet);
    return EXIT_SUCCESS;
}
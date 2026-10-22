
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt=0;
    iCnt=iNo;
    while(iCnt>=0)
    {
        printf("* ");
        iCnt--;
    }
    
}


int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    Display(iValue);
    return EXIT_SUCCESS;
}
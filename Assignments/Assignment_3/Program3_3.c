#include<stdio.h>
#include<stdlib.h>

void DisplayEvenFActor(int iNo1)
{
    int icnt=0;
    if(iNo1<0)
    {
       iNo1=-iNo1;
    }
    if(iNo1%2!=0)
    {
        printf("the entered number don't have even factor");
    }
    for(icnt=1;icnt<=iNo1;icnt++)
    {
        if(iNo1 % icnt==0 && icnt % 2  ==0 )
        {
            
            printf("%d\n",icnt);
            
        }
    }
}
int main()
{
    int iValue=0;
 printf("Enter the number");
 scanf("%d",&iValue);

 DisplayEvenFActor(iValue);



    return EXIT_SUCCESS;
}

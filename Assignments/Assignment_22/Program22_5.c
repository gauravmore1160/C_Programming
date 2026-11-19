#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i=0;
    int iMul=0;
    
    for(i=1;i<=iNo;i++)
    {
        iMul=iMul+2;
        printf("%d\t",iMul);
    }
    

}

int main()
{
    int iValue=0;
   

    printf("Enter the number of Rows:\n");
    scanf("%d",&iValue);

   

    Pattern(iValue);
    

    return EXIT_SUCCESS;
}
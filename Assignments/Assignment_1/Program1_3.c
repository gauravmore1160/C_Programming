///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays numbers from 5 to 1 in descending order
//  Input         : None
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int iCnt=0;
    iCnt=5;
    while(iCnt>=1)
    {
        printf(" %d\n",iCnt);
        iCnt--;
    }
        
}


int main()
{
    Display();
    return EXIT_SUCCESS;
}
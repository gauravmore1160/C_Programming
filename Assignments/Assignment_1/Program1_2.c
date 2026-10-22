///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints 'Marvellous' five times on screen using loop
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
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("Marvellous \n");
    }
}


int main()
{
    Display();
    return EXIT_SUCCESS;
}
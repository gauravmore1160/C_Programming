///////////////////////////////////////////////////////////////////
//
//  Function Name : Accept
//  Description   : Prints star pattern five times on screen
//  Input         : None
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Accept()
{
    int iCnt=0;
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("* ");
    }
}


int main()
{
    Accept();
    return EXIT_SUCCESS;
}
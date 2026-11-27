///////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Displays the complete ASCII table (0 to 255) with symbol, decimal, hexadecimal, and octal values
//  Input         : None
//  Output        : ASCII table printed on console
//  Author        : Gaurav More
//  Date          : 27/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display()
{   
    int iCnt=0;
    printf("Symbol\tDecimal\tHexaDecimal\tOctal\n");
   for(iCnt=0;iCnt<=255;iCnt++)
   {
    printf("%c\t %d\t %X\t\t %o",iCnt,iCnt,iCnt,iCnt);
    printf("\n");
   }    
}

int main()
{
    
   Display();

    return EXIT_SUCCESS;
}
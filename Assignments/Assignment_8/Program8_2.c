///////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSpelling
//  Description   : Accepts a single-digit number (0-9) and prints its spelling in words
//  Input         : Integer
//  Output        : None
//  Author        : Gaurav More
//  Date          : 02/11/2026
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<stdlib.h>

void CheckSpelling(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    else if(iNo>9)
    {
        printf("Invalid Input,Please enter number below 10");
    }

     char *wArr[] = 
    {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    printf("Spelling:%s\n",wArr[iNo]);

}

int main() 
{
    int idigit;
    

    printf("Enter a single-digit number (0-9): ");
   scanf("%d", &idigit) ;

    CheckSpelling(idigit);

    return 0;
}
///////////////////////////////////////////////////////////////////
//
//  Function Name : chkDivision
//  Description   : Accepts student division (A-D) and displays the corresponding exam timing
//  Input         : Character (char)
//  Output        : Exam timing printed on console
//  Author        : Gaurav More
//  Date          : 26/11/2026
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void chkDivision(char ch)
{   
    if (ch==' ')
    {
       return;
    }


        if(ch>=65 && ch<=68 )
        {
           switch(ch)
           {
           case 'A':printf("Exam timing is 7:00AM");
           break;

           case 'B':printf("Exam timing is 8:30AM");
           break;

           case 'C':printf("Exam timing is 9:20AM");
           break;

           case 'D':printf("Exam timing is 10:30AM");
           break;

           } 
        } 

           else if(ch>=97 && ch<=100)
           {
                printf("Enter the Division in Capital");
           }
        
}

int main()
{
    
    char cValue='\0';
    
    printf("Enter the Division:");
    scanf(" %c",&cValue);

    chkDivision(cValue);

    return EXIT_SUCCESS;
}
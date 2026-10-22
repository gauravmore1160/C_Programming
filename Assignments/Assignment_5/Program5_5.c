///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDivisibility
//  Description   : Accepts a character and identifies if it is uppercase, lowercase, digit, or special character
//  Input         : Character
//  Output        : None
//  Author        : Gaurav More
//  Date          : 20/10/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckCharacter(char iNo1)
{
    if(iNo1>='A' && iNo1<='Z' )
    {
        printf("UPPERCASE");
    }
    else if(iNo1>='a' && iNo1<='z')
    {
        printf("LOWERCASE");
    }
    else if(iNo1>='0' && iNo1<='9')
    {
       printf("DIGIT"); 
    }
    else 
    {
       printf("SPECIAL CHARACTER"); 
    }
    
}
int main()
{
    char cValue='\0';
 printf("Enter the number :\n");
 scanf("%c",&cValue);

 CheckCharacter(cValue);
    return EXIT_SUCCESS;
}

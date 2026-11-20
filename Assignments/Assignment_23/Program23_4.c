///////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayDigit
//  Description   : Accepts a string and displays all numeric digits present in it
//  Input         : String (char *)
//  Output        : Digits printed on console
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(char *str)
{
    char iDigit=0;
    if (str==NULL)
    {
       return;
    }
    while(*str != '\0')
    {
        if((*str>='0') && (*str<='9'))
        {
           printf("%c",*str);
        }
       
        str++;
    }
    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter the String:\n");
    scanf("%[^\n]s",Arr);

    DisplayDigit(Arr);

   


    return EXIT_SUCCESS;
}
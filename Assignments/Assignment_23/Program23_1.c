///////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accepts a string and converts all uppercase characters to lowercase in-place
//  Input         : String (char *)
//  Output        : Modified string (in-place conversion)
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    if (str==NULL)
    {
       return;
    }
    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str= *str + 32;   
        }
        *str++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter the String:\n");
    scanf("%[^\n]s",&Arr);

    strlwrx(Arr);

    printf("The Lowercase String is:%s",Arr);


    return EXIT_SUCCESS;
}
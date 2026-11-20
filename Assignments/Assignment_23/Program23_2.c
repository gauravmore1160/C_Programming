///////////////////////////////////////////////////////////////////
//
//  Function Name : strlwrx
//  Description   : Accepts a string and converts all lowercase characters to uppercase in-place
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
        if((*str>='a') && (*str<='z'))
        {
            *str= *str - 32;   
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

    printf("The UpperCase String is:%s",Arr);


    return EXIT_SUCCESS;
}
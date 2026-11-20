///////////////////////////////////////////////////////////////////
//
//  Function Name : StrRevx
//  Description   : Accepts a string and reverses it in-place
//  Input         : String (char *)
//  Output        : Modified reversed string in-place
//  Author        : Gaurav More
//  Date          : 20/11/2026
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void StrRevx(char *str)
{
    int i = 0, j = 0;
    char temp = '\0';

    if (str == NULL)
    {
        return;
    }

    
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    
    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the String:\n");
    scanf(" %19[^\n]", Arr);

    StrRevx(Arr);

    printf("The Reverse String is: %s\n", Arr);

    return EXIT_SUCCESS;
}
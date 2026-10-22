#include<stdio.h>
#include<stdlib.h>

void CheckVowel(char cNo)
{
    if(cNo=='a' || cNo=='e' || cNo=='i' || cNo=='o' || cNo=='u' )
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

}

int main()
{
   char cValue='\0';
   printf("enter the character");
   scanf("%c",&cValue);
   CheckVowel(cValue);
    return EXIT_SUCCESS;
}
#include<stdio.h>
#include<stdlib.h>

char Displayconvert(char cNo1)
{
    if(cNo1>='A' && cNo1<='Z' )
    {
        cNo1=cNo1+32;
        printf("%c\n",cNo1);
    }
    else if(cNo1>='a' && cNo1<='z')
    {
        cNo1=cNo1-32;
        printf("%c\n",cNo1);
        
    }
    
}

int main()
{
    char cValue='\0';
 printf("enter the character: \n");
 scanf("%c",&cValue);
 Displayconvert(cValue);


    return EXIT_SUCCESS;
}
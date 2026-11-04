#include<stdio.h>
#include<stdlib.h>
///////////////////////////////////////////////////////////////////
//
//  Function Name : main
//  Description   : Accepts full name from user and displays it on console
//  Input         : String (Console Input)
//  Output        : String printed on console
//  Author        : Gaurav More
//  Date          : 04/11/2026
//
///////////////////////////////////////////////////////////////////
int main()
{
    char Name[]={"\0"};
    printf("Enter your Name:");
    scanf("%[^\n]s\n",&Name);

    printf("Your Name is:%s\n",Name);
    return EXIT_SUCCESS;
}
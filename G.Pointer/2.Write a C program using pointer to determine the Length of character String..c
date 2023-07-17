//Write a C program using pointer to determine the Length of character String.

#include<stdio.h>
#include<string.h>

int main()
{
    char string[100],*cptr;
    int length=0;

    printf("Enter the String:");
    gets(string);

    cptr=string;

    while(*cptr!='\0')
    {
        length++;
        cptr++;
    }
    printf("Length of the String:%d",length);
}

/*Write a C program to check whether a number is a palindrome or not.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int number,reverse,reminder,orginal;

    printf("Enter The Number:");
    scanf("%d",&number);

    orginal=number;
    reverse=0;

    while(number!=0)
    {
        reminder=number%10;
        reverse=reverse*10 + reminder;
        number=number/10;
    }

    if(reverse==orginal)
    {
        printf("%d is a palindrome.",orginal);
    }
    else
    {
        printf("%d is not palindrome.",orginal);
    }
    return 0;
}

/*Write a C program to enter a number and print its reverse.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int number,reverse,reminder;

    printf("Enter the Number:");
    scanf("%d",&number);

    reverse=0;
    while(number!=0)
    {
        reminder=number%10;
        reverse=reverse*10 + reminder;
        number=number/10;
    }
    printf("Reverse Number is:%d",reverse);
    return 0;

}

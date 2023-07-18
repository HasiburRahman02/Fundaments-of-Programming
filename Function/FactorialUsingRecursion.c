/*Write a C program to print the factorial of a number using recursion.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>

int fact(int n);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of a Number is %d: %d",n,fact(n));
    return 0;
}

int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}

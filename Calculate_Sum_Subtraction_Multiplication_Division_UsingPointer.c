/*Write a C program to Calculate Sum,Subtraction,Multiplication & Division of Two number using a Function.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
void calculate(int a ,int b, int *sum, int *sub, int *mul, int *div);

int main()
{
    int sum,sub,mul,div;
    int a,b;

    printf("Enter the Value of First Number:");
    scanf("%d",&a);
    printf("\nEnter the Value of First Number:");
    scanf("%d",&b);

    calculate(a,b,&sum,&sub,&mul,&div);

    printf("\nThe Sum of Two Numbers:%d",sum);
    printf("\nThe Subtraction of Two Numbers:%d",sub);
    printf("\nThe Multiplication of Two Numbers:%d",mul);
    printf("\nThe Division of Two Numbers:%d\n",div);
}

void calculate(int a ,int b, int *sum, int *sub, int *mul, int *div)
{
    *sum=a+b;
    *sub=a-b;
    *mul=a*b;
    *div=a/b;
}

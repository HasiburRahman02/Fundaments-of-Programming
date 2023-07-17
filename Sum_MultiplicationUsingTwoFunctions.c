/*Write a program in C to find the Sum & Multiplication of any two number using two functions.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int addNumbers(int Number1, int Number2);
int multipleNumbers(int Number1 , int Number2);


int main()
{
    int a,b;

    printf("Enters two numbers: ");
    scanf("%d %d",&a,&b);

    int result = addNumbers( a, b);
    printf("The Result is %d",result);

    int Multiply = multipleNumbers( a, b);
    printf("\nThe multiply is %d",Multiply);
}

int addNumbers(int Number1, int Number2)
{
    int sum=0;
    sum=Number1+Number2;
    return sum;
}

int multipleNumbers(int Number1, int Number2)
{
    int mul=Number1*Number2;
    return mul;
}




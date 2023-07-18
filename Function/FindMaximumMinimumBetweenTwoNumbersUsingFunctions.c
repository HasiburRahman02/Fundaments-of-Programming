/*Write a C program to find the maximum and minimum between two numbers using functions.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int max(int num1, int num2);
int min(int num1, int num2);



int main()
{
    int num1, num2, maximum, minimum;

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    maximum = max(num1, num2);
    minimum = min(num1, num2);

    printf("\nThe Maximum Number is: %d", maximum);
    printf("\nThe Minimum Number is: %d", minimum);

    return 0;
}


int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}

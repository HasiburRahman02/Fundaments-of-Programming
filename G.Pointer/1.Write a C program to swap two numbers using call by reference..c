//Write a C program to swap two numbers using call by reference.

#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a,b;

    printf("Enter the two Numbers:");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping the values:\na = %d, b = %d\n",a,b);

    swap(&a,&b);

    printf("\nAfter swapping values in main:\na = %d, b = %d\n",a,b);
    return 0;
}
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("\nAfter swapping values in function:\na = %d, b = %d\n",*a,*b);
}

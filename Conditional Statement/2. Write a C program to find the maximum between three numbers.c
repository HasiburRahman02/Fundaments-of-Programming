/*Write a C program to find the maximum between three numbers

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("Enter the Three Number:");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2)
    {
        if(n1>n3)
        {
            printf("%d is largest Number.",n1);
        }
        else
        {
            printf("%d is largest Number.",n3);
        }
    }
    else
    {
        if(n2>n3)
        {
            printf("%d is largest Number.",n2);
        }
        else
        {
            printf("%d is largest Number",n3);
        }
    }
    return 0;
}

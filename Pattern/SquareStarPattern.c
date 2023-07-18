/*Write a C program to print Square Star Pattern

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()

{
    int i,j,n;

    printf("Enter the Number of Rows:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
           printf("* ");
        }
        printf("\n");
    }
}


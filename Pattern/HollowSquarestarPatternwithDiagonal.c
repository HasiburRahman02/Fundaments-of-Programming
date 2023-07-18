/*Write a C program to print Hollow Square Star Pattern with Diagonal

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
            if(i==1 || i==n || j==1 || j==n || j==i || j==n-i+1)
            {
              printf("*");
            }
            else
            {
              printf(" ");
            }
        }
        printf("\n");
    }
}


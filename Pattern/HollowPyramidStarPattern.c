/*Write a C program to print Hollow Pyramid Star Pattern.

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
        for(j=1; j<=2*n-1; j++)
        {
            if(i==n || j==n-(i-1) || j==n+(i-1))
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
 return 0;
}





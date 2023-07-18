/*Write a C program to print Mirrored Right Triangle Star Pattern

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
        for(j=1; j<=n-i; j++)
        {
         printf(" ");
        }
         for(j=1;j<=i;j++)
        {
              printf("*");
        }
     printf("\n");
    }
 return 0;
}




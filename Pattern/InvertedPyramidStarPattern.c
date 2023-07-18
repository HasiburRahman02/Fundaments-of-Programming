/*Write a C program to print Inverted Pyramid Star Pattern

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
            if(j>=i && j<=2*n-i)
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





/*Write a program to print Fibonacci series upto n number of terms.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int h1,h2,n,i,result;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    h1=0;
    h2=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",h1);
        result=h1+h2;
        h1=h2;
        h2=result;
    }
    return 0;
}

/*Write a C program to find all factors of a number.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int number,i;
    printf("Enter the number to find its factor:");
    scanf("%d",&number);

    printf("All factors of %d are: \n", number);
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

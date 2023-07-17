/*Write a C program using pointer to compute the sum of all elements stored in an array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
    int size, i, sum,*p;

    printf("Enter Size of Array:");
    scanf("%d", &size);
    int arr[size];

    printf("\nEnter Elements in Array: ");

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum=0;
    p=arr;

    for(i=0;i<size;i++)
    {
        printf("\n arr[%d]\t %d\t%d\n",i,*p,p);
        sum=sum+*p;
        p++;
    }
    printf("\n The Sum of all Array Elements=%d\n",sum);
    return 0;
}


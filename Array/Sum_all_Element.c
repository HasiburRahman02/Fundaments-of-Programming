/*Write a program in C to find the sum of all elements of the array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int i,size,sum=0;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the Element of Array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    printf("The sum of all elements of array:%d",sum);

}

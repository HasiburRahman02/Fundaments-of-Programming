/*Write a program in C to copy the elements of one array into another array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr1[size],arr2[size];

    printf("Enter the Element of Array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0;i<size;i++)
    {
        arr2[i]=arr1[i];
    }

    printf("The Copied Array is:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr2[i]);
    }

}

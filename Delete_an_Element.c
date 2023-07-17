/*Write a C Program delete an element from an Array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int i,size,position;
    printf("Enter the size of Array:");
    scanf("%d",&size);
    int arr[size];

    printf("Enter the Element of Array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the position where you can delete:");
    scanf("%d",&position);

    if(position>size)
    {
        printf("Deletion is not possible.");
    }
    else
    {
        for(i=position-1;i<size;i++)
        {
            arr[i]=arr[i+1];
        }

        printf("Resultant Array:");
        for(i=0;i<size-1;i++)
        {
            printf("%d ",arr[i]);
        }
    }

}


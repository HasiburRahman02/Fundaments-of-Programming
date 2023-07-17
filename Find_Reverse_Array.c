/*Write a C program to Find Reverse of Array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
    int size, i;

    printf("Enter Size of Array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Elements in Array: ");

    for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }

    printf("\n Array in Reverse Order:");
    for(i=size-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

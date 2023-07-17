/*Write a C program to Search Maximum & Minimum Value in an Array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
    int size, i,max,min;

    printf("Enter Size of Array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Elements in Array: ");

    for(i=0; i<size; i++)
        {
            scanf("%d", &arr[i]);
        }

    max=arr[0];
    min=arr[0];

    for(i=0;i<size;i++)
    {
        if(max<=arr[i])
        {
            max=arr[i];
        }
        else if(min>=arr[i])
        {
            min=arr[i];
        }
    }
    printf("\nThe Maximum Value Of this Array=%d\n",max);
    printf("\nThe Minimum Value Of this Array=%d\n",min);

    return 0;
}

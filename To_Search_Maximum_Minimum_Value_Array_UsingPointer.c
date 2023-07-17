/*Write a C program using pointer to Search Maximum & Minimum value in an array.

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
    p=arr;
    int max=arr[0];
    int min=arr[0];

    for(int i=0;i<size;i++)
    {
        if(max<=*p)
        {
            max=*p;
        }
        else if(min>=*p)
        {
            min=*p;

        }

        p++;
    }
    printf("\nThe Maximum Value Of this Array=%d\n",max);

    printf("\nThe Minimum Value of this Array=%d\n",min);

    return 0;
}



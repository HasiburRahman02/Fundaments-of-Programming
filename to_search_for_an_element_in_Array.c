/*Write a C program to search for an element in an array.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
    int size, i, toSearch, found;

    printf("Enter Size of Array:");
    scanf("%d", &size);
    int arr[size];

    printf("Enter Elements in Array: ");

    for(i=0; i<size; i++)
        {
           scanf("%d", &arr[i]);
        }

    printf("\n Enter Element to Search: ");
    scanf("%d", &toSearch);

    found=0;
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

   if(found = 1)
    {
         printf("\n %d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n %d is not found in the array", toSearch);
    }

    return 0;
}

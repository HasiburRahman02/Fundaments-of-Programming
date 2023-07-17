/*Write a C program to sort an array list numbers (Bubble sort)

  Author: Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()
{
    int data[]={-2,45,0,11,-9};
    int n=sizeof(data)/sizeof(data[0]);

    for(int step=0;step<n-1;step++)
    {
        for(int i=0;i<n-step-1;i++)
        {
            if(data[i] > data[i+1])
            {
                int temp = data[i];
                data[i] = data[i+1];
                data[i+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }
}

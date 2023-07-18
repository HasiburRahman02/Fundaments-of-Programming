/*Write a C program to print a year is leap year or not using ternary operator

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any Year:");
    scanf("%d",&year);

    (((year%4==0)&&(year%100!=0) || (year%400==0)))?printf("Leap Year."):printf("common Year.");

    return 0;
}

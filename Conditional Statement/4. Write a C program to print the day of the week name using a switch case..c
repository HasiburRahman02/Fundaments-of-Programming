/*Write a C program to print the day of the week name using a switch case.

  Author:Hasibur Rahman(13/21|CSE-02)

*/
#include<stdio.h>

int main()
{
    int day;
    printf("Enter Number of day(1-7):");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Error!Please enter day number between 1-7.");
    }
    return 0;
}

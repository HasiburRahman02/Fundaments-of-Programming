/*Write a C program to check whether the triangle is an equilateral, isosceles, or scalene triangle

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("Enter three sides of triangle:");
     scanf("%d %d %d",&a,&b,&c);

     if(a==b && b==c)
     {
         printf("Equilateral Triangle.");
     }
     else if(a==b || b==c || c==a)
     {
         printf("Isosceles Triangle.");
     }
     else
     {
         printf("Scalene Triangle.");
     }
     return 0;
 }

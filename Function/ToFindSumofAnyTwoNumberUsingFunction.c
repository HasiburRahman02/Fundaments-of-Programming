/*Write a program in C to find the sum of any two number using the function.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

/*
//Argument Passed But No Return Value.
#include <stdio.h>
void addNumbers(int Number1, int Number2);

int main()
{
    int a,b;

    printf("Enters two numbers: ");
    scanf("%d %d",&a,&b);
    addNumbers( a, b);
}

void addNumbers(int Number1, int Number2)
{
    int sum=0;
    sum=Number1+Number2;
    printf("Sum of two Numbers is %d",sum);

}
*/


//Argument Passed and Returns a Value.
#include <stdio.h>
int addNumbers(int Number1, int Number2);

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int result = addNumbers( a, b);
    printf("Sum of two Numbers is %d",result);
}

int addNumbers(int Number1, int Number2)
{
    int sum=0;
    sum=Number1+Number2;
    return sum;
}

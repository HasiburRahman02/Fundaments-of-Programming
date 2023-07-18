/*Write a C program to print I Love(SADIYA) You Star Pattern.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include<stdio.h>
int main()

{
    int i,j;     //i means Row;j means Columns.

//Print I Shape Star Pattern.

    for( i=0; i<9; i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("  ");
        }
        for(j=0; j<3; j++)
        {
            if(i==0 || j==1 || i==8)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");

//Print Heart(SADIYA) Shape Star Pattern.

    for(i=1;i<3;i++)
    {
        for(j=1;j<=13;j++)
        {
            if((j>=3-i &&  j<=3+i) || (j>=11-i && j<=11+i))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for(i=3;i<=4;i++)
    {
        for(j=1;j<=13;j++)
        {
            if( i==3 && ((j>=1 && j<=6) || (j>=8 && j<=13) ) )
            {
                printf("* ");
            }
            else
            {
                if(i==3)
                {
                    printf("  ");
                }
            }

            if( i==4 && (j>=2 && j<=12) )
            {
                switch (j)
                {
                    case 4: printf("S ");
                    break;
                    case 5: printf("A ");
                    break;
                    case 6: printf("D ");
                    break;
                    case 7: printf("I ");
                    break;
                    case 8: printf("Y ");
                    break;
                    case 9: printf("A ");
                    break;
                    default: printf("* ");
                    break;
                }
            }
            else
            {
                if(i==4)
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    for(i=1; i<=5; i++)
    {
        for(j=1;j<=2;j++)
        {
            printf("  ");
        }

        for(j=1; j<=9; j++)
        {
            if(j>=i && j<=9-i+1)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
     printf("\n");
    }
    printf("\n");

//Print U Shape Star Pattern.

    for( i=1; i<=5; i++)
    {
        for(j=1; j<13; j++)
        {
            if(j==5 || j==9)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(i=1;i<=1;i++)
    {
        for(j=1;j<=13;j++)
        {
            if(i==1 && (j==6 || j==7 || j==8))
            {
                printf("* ");
            }
            else
            {
                if(i==1)
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

 return 0;
}





/*Write a C program for Subtraction of Two Matrices.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
   int i,j,row1,col1,row2,col2;

   printf("\nEnter the number of rows of mat1 :");
   scanf("%d", &row1);
   printf("\nEnter the number of columns of mat1 :");
   scanf("%d", &col1);
   printf("\nEnter the number of rows of mat2 :");
   scanf("%d", &row2);
   printf("\nEnter the number of columns of mat2 :");
   scanf("%d", &col2);

   int mat1[row1][col1],mat2[row2][col2],sum[row1][col2];

   if(row1 != row2 || col1 != col2)
   {
       printf("\nThe subtraction is not possible.");
   }
   else
   {
       printf("\nEnter the Elements of First Matrix :");
       for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                    {
                        printf("\nEnter the Element a[%d][%d]: ",i,j);
                        scanf("%d",&mat1[i][j]);
                    }
            }
        printf("\nEnter the Elements of Second Matrix :");
        for(i=0;i<row2;i++)
            {
                for(j=0;j<col2;j++)
                    {
                        printf("\nEnter the Element b[%d][%d]: ",i,j);
                        scanf("%d",&mat2[i][j]);
                    }
            }
        printf("\nShowing First Matrix: \n");
        for (i = 0; i < row1; i++)
            {
                for (j = 0; j <col1; j++)
                    {
                        printf("%d\t", mat1[i][j]);
                    }
                printf("\n\n");
            }
        printf("\nShowing Second Matrix: \n");
        for (i = 0; i < row2; i++)
            {
                for (j = 0; j <col2; j++)
                    {
                        printf("%d\t", mat2[i][j]);
                    }
                printf("\n\n");
            }
       printf("\nThe Subtraction of Two Matrices is :\n");
       for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                    {
                       sum[i][j]=mat1[i][j] - mat2[i][j];
                    }
            }
       for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                    {
                       printf("%d\t", sum[i][j]);
                    }
                printf("\n\n");
            }
    }
    return 0;
}



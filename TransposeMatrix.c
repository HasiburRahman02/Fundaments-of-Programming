/*Write a C program for Transpose of A Matrix.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
   int i,j,row,col;

   printf("\nEnter the number of rows of mat :");
   scanf("%d", &row);
   printf("\nEnter the number of columns of mat :");
   scanf("%d", &col);

   int mat[row][col],transpose[row][col];

    printf("\nEnter the Elements of A Matrix :");
    for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                {
                    printf("\nEnter the Element a[%d][%d]: ",i,j);
                    scanf("%d",&mat[i][j]);
                }
        }
    printf("\nShowing the Matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j <col; j++)
            {
                printf("%d\t", mat[i][j]);
            }
        printf("\n\n");
    }
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < row; i++)
        {
            for (j = 0; j <col; j++)
                {
                    transpose[j][i] = mat[i][j];
                }
        }
      for(i=0;i<col;i++)
            {
                for(j=0;j<row;j++)
                    {
                       printf("%d\t", transpose[i][j]);
                    }
                printf("\n\n");
            }
    return 0;
}


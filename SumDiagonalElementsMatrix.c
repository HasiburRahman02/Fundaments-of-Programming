/*Write a C program for Sum of Diagonal Elements of a Matrix.

  Author:Hasibur Rahman(13/21|CSE-02)

*/

#include <stdio.h>
int main()

{
   int i,j,row,col,sum=0;

   printf("\nEnter the number of rows of mat :");
   scanf("%d", &row);
   printf("\nEnter the number of columns of mat :");
   scanf("%d", &col);

   int mat[row][col],transpose[row][col];

    if(row!=col)
    {
        printf("Sum of diagonal elements of a matrix is not possible.");
    }
    else
    {
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
        printf("Diagonal Elements: ");
        for (i = 0; i < row; i++)
            {
                for (j = 0; j <col; j++)
                    {
                        if(i==j)
                            {
                                printf("%d\t",mat[i][j]);
                                sum+=mat[i][j];
                            }
                    }
            }
        printf("\nSum of Diagonal Elements: %d",sum);
    }
    return 0;
}

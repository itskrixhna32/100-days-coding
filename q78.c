#include <stdio.h>

int main()
{
    int row, col, i, j, sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("enter the number of columns: ");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter the elements of the matrix \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
                sum = sum + matrix[i][j];
        }
    }

    printf("Sum of the diognal elements of the matrix is : %d", sum);

    return 0;
}
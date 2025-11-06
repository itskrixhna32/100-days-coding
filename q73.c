#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("Sum of all the elements row wise is: \n");
    for (int i = 0; i < rows; i++)
    {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
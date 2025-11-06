#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d", &rows, &cols);

    int matrix[rows][cols];
    printf("enter the elements of the matrix: \n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1; // assume true
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j < rows; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("The matrix has differrent diognal elements . \n");
    else
        printf("The matrix has same elements in elements . \n");

    return 0;
}
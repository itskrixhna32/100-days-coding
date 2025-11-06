#include <stdio.h>

int main()
{
    int row, column, i, j;
    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &column);

    int arr[row][column];

    printf("Enter the numbers: \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &arr[i][j]);

    printf("The Matrix is : \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
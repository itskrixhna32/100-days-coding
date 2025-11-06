#include <stdio.h>

int main()
{
    int row, column, i, j;
    int sum = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &row);
    printf("Enter the number of columns : ");
    scanf("%d", &column);

    int arr[row][column];

    printf("Enter the numbers \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("Sum of all the elements of the array is : %d\n", sum);

    return 0;
}
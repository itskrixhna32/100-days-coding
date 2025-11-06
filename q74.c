
#include <stdio.h>

int main()
{
    int r1, c1;
    printf("enter number of rows in first matrix:");
    scanf("%d", &r1);
    printf("enter number of rows in first matrix:");
    scanf("%d", &c1);

    int m1[r1][c1];

    printf("enter elements in matrix: \n");
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d", &m1[i][j]);
        }
    }

    int ans[c1][r1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            ans[j][i] = m1[i][j];
        }
    }

    printf("transpose - \n");
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

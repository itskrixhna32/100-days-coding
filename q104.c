#include <stdio.h>

int main()
{
    int n;
    printf("enter any positive integer (n): ");
    scanf("%d", &n);

    for (int x = 1; x <= n; x++)
    {
        int leftSum = 0, rightSum = 0;

        for (int i = 1; i <= x; i++)
            leftSum += i;

        for (int i = x; i <= n; i++)
            rightSum += i;

        if (leftSum == rightSum)
        {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}

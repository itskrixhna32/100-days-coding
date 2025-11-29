#include <stdio.h>
int main()
{
    int n, tgt;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    scanf("%d", &tgt);

    int found_i = -1, found_j = -1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == tgt)
            {

                found_i = i;
                found_j = j;
                break;
            }
        }
        if (found_i != -1)
        {
            break;
        }
    }

    printf("%d %d\n", found_i, found_j);
    return 0;
}
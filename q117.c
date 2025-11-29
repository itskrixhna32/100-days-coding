#include <stdio.h>

int main()
{
    int m, n;

    scanf("%d", &m);
    int array1[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array1[i]);
    }

    scanf("%d", &n);
    int array2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array2[i]);
    }

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge process
    while (i < m && j < n)
    {
        if (array1[i] <= array2[j])
        {

            merged[k++] = array1[i++];
        }
        else
        {

            merged[k++] = array2[j++];
        }
    }

    // Copy remaining elements of array1 if available
    while (i < m)
    {
        merged[k++] = array1[i++];
    }

    // Copy remaining elements of array2 if available
    while (j < n)
    {
        merged[k++] = array2[j++];
    }
    for (int idx = 0; idx < m + n; idx++)
    {
        printf("%d ", merged[idx]);
    }

    printf("\n");

    return 0;
}
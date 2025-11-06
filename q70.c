#include <stdio.h>

int main()
{
    int n, i, k;
    printf("Enter the length of the array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of rotations : ");
    scanf("%d", &k);
    k = k % n;

    int result[n];

    for (int i = 0; i < n; i++)
    {
        result[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}
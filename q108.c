#include <stdio.h>

int main()
{
    int length;
    printf("Enter total numbers: ");
    scanf("%d", &length);
    int arr[length];

    printf("Enter all numbers:\n");
    for (int pos = 0; pos < length; pos++)
    {
        scanf("%d", &arr[pos]);
    }

    int result[length];

    for (int i = 0; i < length; i++)
    {
        int prod = 1;
        for (int j = 0; j < length; j++)
        {
            if (j != i)
            {
                prod = prod * arr[j];
            }
        }
        result[i] = prod;
    }

    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf("%d", result[i]);
        }
        else
        {
            printf("%d, ", result[i]);
        }
    }
    printf("]");

    return 0;
}
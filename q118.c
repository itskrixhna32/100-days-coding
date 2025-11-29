#include <stdio.h>

int main()
{
    int size;
    scanf("%d", &size);

    int arr[size];
    int total_sum = size * (size + 1) / 2;
    int sum_of_elements = 0;

    for (int idx = 0; idx < size; idx++)
    {
        scanf("%d", &arr[idx]);
        sum_of_elements += arr[idx];
    }

    int missing = total_sum - sum_of_elements;
    printf("%d\n", missing);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter total elements count: ");
    scanf("%d", &n);
    int nums[n];

    printf("Provide %d numbers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int window_size;
    printf("Enter window size (k): ");
    scanf("%d", &window_size);
    for (int start = 0; start <= n - window_size; start++)
    {
        int max_val = nums[start];
        for (int j = start + 1; j < start + window_size; j++)
        {
            if (nums[j] > max_val)
            {
                max_val = nums[j];
            }
        }
        printf("%d", max_val);
        if (start != n - window_size)
        {
            printf(" ");
        }
    }
    return 0;
}
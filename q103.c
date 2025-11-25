#include <stdio.h>

int findPivotIndex(int nums[], int n)
{
    int totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        totalSum -= nums[i];
        if (leftSum == totalSum)
        {
            return i;
        }
        leftSum += nums[i];
    }

    return -1;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int pivotIndex = findPivotIndex(nums, n);
    printf("%d\n", pivotIndex);

    return 0;
}
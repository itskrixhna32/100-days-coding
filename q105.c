#include <stdio.h>

int findMajorityElement(int nums[], int n)
{
    // Using Boyer Moore Voting Algorithm
    int count = 0, candidate = -1;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return candidate;
    }
    else
    {
        return -1;
    }
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
    int majority = findMajorityElement(nums, n);
    printf("%d\n", majority);
    return 0;
}
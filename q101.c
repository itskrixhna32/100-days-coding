#include <stdio.h>

int findFirstOccurrence(int nums[], int n, int target)
{
    int low = 0, high = n - 1, first = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            first = mid;
            high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
}

int findLastOccurrence(int nums[], int n, int target)
{
    int low = 0, high = n - 1, last = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            last = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

int main()
{
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements (sorted): ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    printf("Enter target element: ");
    scanf("%d", &target);

    int first = findFirstOccurrence(nums, n, target);
    int last = findLastOccurrence(nums, n, target);

    printf("Index of first and last occurrence is : ");
    printf("%d,%d\n", first, last);

    return 0;
}
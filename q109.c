#include <stdio.h>

int main()
{
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    int values[size];

    printf("Enter the elements:\n");
    for (int idx = 0; idx < size; idx++)
    {
        scanf("%d", &values[idx]);
    }
    int window;
    printf("Enter subarray size k: ");
    scanf("%d", &window);
    int maxTotal = 0;
    // Calculate initial window sum
    for (int i = 0; i < window; i++)
    {
        maxTotal += values[i];
    }
    int currentTotal = maxTotal;
    for (int j = window; j < size; j++)
    {
        currentTotal = currentTotal - values[j - window] + values[j];
        if (currentTotal > maxTotal)
        {
            maxTotal = currentTotal;
        }
    }
    printf("%d", maxTotal);

    return 0;
}
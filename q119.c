#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[100000] = {0}; // Auxiliary array for frequencies, size assumed sufficient

    int repeated = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
        if (freq[arr[i]] > 1)
        {
            repeated = arr[i];
        }
    }

    printf("%d\n", repeated);
    return 0;
}
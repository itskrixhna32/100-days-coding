#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int negIndex[n];  // to store indexes of negative numbers
    int front = 0, rear = 0;

    // Process windows
    for (int i = 0; i < n; i++) {

        // Add current element if it's negative
        if (arr[i] < 0) {
            negIndex[rear++] = i;
        }

        // Remove negatives outside the current window
        while (front < rear && negIndex[front] <= i - k)
            front++;

        // When first window completes
        if (i >= k - 1) {
            if (front < rear)
                printf("%d ", arr[negIndex[front]]); // first negative
            else
                printf("0 ");
        }
    }

    return 0;
}

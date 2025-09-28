#include <stdio.h>

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main()
{
    int numbers[6];
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&numbers[i]);
    }
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int key = 3;

    int result = linearSearch(numbers, size, key);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", key, result);
    }
    else
    {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
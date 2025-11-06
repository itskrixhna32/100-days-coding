#include <stdio.h>

int main() 
{
    int n, key;
    printf("Enter the length of the array : ") ; 
    scanf("%d",&n);

    int arr[n+1];
    printf("Enter the elements of the array in ascending order \n"); 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&arr[i]);
    } 
    printf("Enter the number you want to insert : "); 
    scanf("%d",&key);

    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--) 
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = key;

    n++; 
    for (i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
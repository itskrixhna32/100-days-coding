#include <stdio.h>

int main() 
{
    int n, element ;  
    printf("Enter the length of the array : ") ; 
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the arrays in ascending order \n"); 
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    printf("Enter the number you want to search : ") ; 
    scanf("%d", &element); 

    int low = 0, high = n - 1, mid;
    int found = -1 ; 

    while (low <= high) 
    {
        mid = (low + high) / 2;

        if(arr[mid] == element) 
        {
            found = mid;
            break;
        }
        else if(arr[mid] < element) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }

    if (found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
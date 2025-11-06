#include <stdio.h>

int main() 
{
    int n; 
    printf("Enter the length of the array : "); 
    scanf("%d", &n);
 
    int arr[n+1];

    for (int i = 0;i < n;i++) 
    {
        scanf("%d",&arr[i]);
    }

    int pos,element; 
    printf("Enter the index and the number \n"); 
    scanf("%d%d",&pos,&element);

    for (int i = n - 1; i >= pos; i--) 
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element ;

    for (int i = 0; i <= n; i++) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
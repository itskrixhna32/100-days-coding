#include <stdio.h>

int main()
{
    int arr[5];
    for(int i=0;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=5;i++)
    {
        printf("%d ",arr[i]);
    }
    
    int sum = 0;
    for(int i=0;i<=5;i++)
    {
        sum = sum + arr[i];
    }
    printf("\nSum = %d ",sum);
    
    return 0;
}
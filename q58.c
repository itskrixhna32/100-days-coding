#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] < l)
        {
            l = arr[i];
        }
    }
    printf("smallest number: %d ", l);
    int j = arr[0];
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>j)
        {
            j = arr[i];
        }
    }
    printf("\nlargest number: %d ",j);
    
    return 0;
}
#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count_even = 0;
    int count_odd = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i]%2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("even numbers: %d ",count_even);
    printf("\nodd numbers: %d ",count_odd);

    return 0;
}
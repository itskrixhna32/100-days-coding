#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count_positive = 0;
    int count_negative = 0;
    int count_zero = 0;
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i]>0)
        {
            count_positive++;
        }
        else if(arr[i]<0)
        {
            count_negative++;
        }
        else
        {
            count_zero++;
        }
    }
    printf("positive numbers: %d \n",count_positive);
    printf("negative numbers: %d \n",count_negative);
    printf("zero numbers: %d \n",count_zero);

    return 0;
}
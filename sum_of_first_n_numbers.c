#include <stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i=0;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("sum of first n numbers is:%d",sum);
    return 0;
}
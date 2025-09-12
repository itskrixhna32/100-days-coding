#include <stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        sum += n%10;
        n = n/10;
    }
    printf("Sum of digits: %d\n",sum);
    return 0;
}
#include <stdio.h>
int main()
{
    int n,rem;
    printf("enter any number: ");
    scanf("%d",&n);
    int product = 1;
    while(n>0)
    {
        rem=n%10;
        if(rem%2!=0)
        product = product*rem;
        n=n/10;
    }
    printf("product of odd digits: %d\n",product);

    return 0;
}
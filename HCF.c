#include <stdio.h>
int main()
{
    int a,b,gcd;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    for(int i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("GCD of %d and %d is: %d\n",a,b,gcd);
    return 0;
}
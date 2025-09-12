#include <stdio.h>
int main()
{
    int a;
    int rev = 0;
    int rem;
    int original;
    printf("enter an integer: ");
    scanf("%d", &a);
    original=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(original==rev)
    {
        printf("%d is a palindrome.\n",original);
    }
    else
    {
        printf("%d is not a palindrome.\n",original);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int num,originalnum,rem,sum=0;
    printf("enter any number: ");
    scanf("%d",&num);

    originalnum=num;
    while(num>0)
    {
        rem = num%10;
        int fact=1;
        for(int i=1;i<=rem;i++)
        {
            fact = fact*i;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(sum == originalnum)
    {
        printf("%d is a perfect number\n",sum);
    }
    else
    {
        printf("%d is not a perfect number\n",sum);
    }
    return 0;

}
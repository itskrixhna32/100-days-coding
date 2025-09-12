#include <stdio.h>
int main()
{
    int num,originalnum,rem,result=0,n=0;
    printf("enter an integer: ");
    scanf("%d",&num);
    originalnum = num;
    while(originalnum!=0)
    {
        originalnum/=10;
        ++n;
    }
    originalnum=num;
    while(originalnum!=0)
    {
        rem=originalnum%10;
        int power=1;
        for(int i=1;i<=n;i++)
        {
            power*=rem;
        }
        result+=power;
        originalnum/=10;
    }
    if(result==num)
    {
        printf("%d is  an armstrong numnber.\n",num);
    }
    else
    {
        printf("%d is not an armstrong number.\n",num);
    }
    return 0;
}
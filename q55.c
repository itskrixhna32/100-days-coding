#include <stdio.h>
int main()
{
    int n;
    printf("enter any number: ");
    scanf("%d",&n);

    for(int j=1;j<=n;j++)
    {
        int prime = 1;

        for(int i=2;i<=j-1;i++)
        {
            if(j%i == 0)
            {
                prime = 0;
            }
        }
        if(prime == 1)
        {
            printf("%d ",j);
        }
    }
    return 0;
}
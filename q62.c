#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the length of the array : "); 
    scanf("%d",&n);

    int input[n], reverse[n]; 

    printf("Enter the numbers:\n"); 
    for(i=0; i<n; i++)
    {
        scanf("%d",&input[i]);
    }

    printf("Reverse of the array is:\n");
    for(i=0; i<n; i++)
    {
        reverse[i] = input[n-1-i]; 
        printf("%d ",reverse[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float division = (float)a / b;
    printf("sum: %d\n", sum);
    printf("difference: %d\n",difference);
    printf("product: %d\n", product);
    printf("division: %.2f\n", division);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
    printf("enter the first coefficient: ");
    scanf("%f",&a);
    printf("enter the second coefficient:");
    scanf("%f",&b);
    printf("enter the third coefficient:");
    scanf("%f",&c);

    discriminant=b*b-4*a*c;
    if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant)/(2*a));
        root2=(-b-sqrt(discriminant)/(2*a));
        printf("root1 = %.2f and root2 = %.2f",root1,root2);
        printf("\nthe roots are real and different.");
    }
    else if((discriminant)==0)
    {
        root1=root2=-b/(2*a);
        printf("root1=root2=%.2f",root1);
        printf("\nthe roots are real and same.");
    }
    else
    {
        realpart=-b/(2*a);
        imaginarypart=sqrt(-discriminant)/(2*a);
        printf("root1=%.2f+%.2fi",realpart,imaginarypart);
        printf("root2=%.2f-%.2fi",realpart,imaginarypart);
        printf("\nthe roots are complex and different.");
    }
    return 0;
}